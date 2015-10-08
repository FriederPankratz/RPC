macro(gradle_build directory jar)
    find_package(Java 1.6 COMPONENTS Runtime REQUIRED)
    find_program(GRADLE_EXE gradle)
    if(GRADLE_EXE)
        message(STATUS "Found Gradle: ${GRADLE_EXE}")
    else()
        message(FATAL_ERROR "gradle is needed to build the java application. Please install it correctly")
    endif()

    set(RPCDDS_CUSTOM_VENDOR "")
    if(RPCPROTO STREQUAL "rpcdds" AND WITH_FASTRTPS AND NOT WITH_RTIDDS)
        set(RPCDDS_CUSTOM_VENDOR "-Pcustomvendor=eProsima")
    elseif(RPCPROTO STREQUAL "rpcdds" AND WITH_RTIDDS AND NOT WITH_FASTRTPS)
        set(RPCDDS_CUSTOM_VENDOR "-Pcustomvendor=RTI")
    endif()

    get_filename_component(Java_JAVA_EXECUTABLE_DIR ${Java_JAVA_EXECUTABLE} DIRECTORY)

    add_custom_target(java ALL
        COMMAND ${CMAKE_COMMAND} -E env
        "JAVA_HOME="
        "PATH=${Java_JAVA_EXECUTABLE_DIR}"
        "${GRADLE_EXE}" -Pcustomversion=${PROJECT_VERSION} ${RPCDDS_CUSTOM_VENDOR} ${jar}
        WORKING_DIRECTORY ${directory}
        COMMENT "Generating Java application" VERBATIM)

    set(THIRDPARTY_FOUND false)
    foreach(arg ${ARGN})
        if("${arg}" STREQUAL "THIRDPARTY_DEPENDENCY")
            set(THIRDPARTY_FOUND true)
        else()
            if(THIRDPARTY_FOUND)
                add_custom_command(TARGET java PRE_BUILD
                    COMMAND git submodule update --recursive --init thirdparty/${arg}
                    WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}
                    COMMENT "Updating Git module ${arg}" VERBATIM)
                set(THIRDPARTY_FOUND false)
            else()
                message(FATAL_ERROR "Bad use of gradle_build command")
            endif()
        endif()
    endforeach()
endmacro()
