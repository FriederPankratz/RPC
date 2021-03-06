macro(generate_msvc_libraries platform)
    string(COMPARE EQUAL "${platform}" "i86Win32VS2013" IS_I86WIN32VS2013)
    string(COMPARE EQUAL "${platform}" "x64Win64VS2013" IS_X64WIN64VS2013)
    string(COMPARE EQUAL "${platform}" "i86Win32VS2015" IS_I86WIN32VS2015)
    string(COMPARE EQUAL "${platform}" "x64Win64VS2015" IS_X64WIN64VS2015)

    set(GENERATOR_ "")
    if(IS_I86WIN32VS2013)
        set(GENERATOR_ "Visual Studio 12 2013")
    elseif(IS_X64WIN64VS2013)
        set(GENERATOR_ "Visual Studio 12 2013 Win64")
    elseif(IS_I86WIN32VS2015)
	set(GENERATOR_ "Visual Studio 14 2015")
    elseif(IS_X64WIN64VS2015)
	set(GENERATOR_ "Visual Studio 14 2015 Win64")
    else()
        message(FATAL_ERROR "Lexical error defining platform. Trying to use platform \"${platform}\"")
    endif()

    add_custom_target(${PROJECT_NAME}_${platform}_dir
        COMMAND ${CMAKE_COMMAND} -E make_directory "${PROJECT_BINARY_DIR}/eprosima_installer/${platform}"
        )

    set(_USE_FASTRTPS "")
    set(_USE_RTIDDS "")
    if(RPCPROTO STREQUAL "rpcdds")
        set(_USE_FASTRTPS "-DWITH_FASTRTPS=${WITH_FASTRTPS}")
        set(_USE_RTIDDS "-DWITH_RTIDDS=${WITH_RTIDDS}")
    endif()

    add_custom_target(${PROJECT_NAME}_${platform} ALL
        COMMAND ${CMAKE_COMMAND} -G "${GENERATOR_}" -DEPROSIMA_BUILD=${EPROSIMA_BUILD} -DMINION=ON -DEPROSIMA_INSTALLER_MINION=ON -DCMAKE_INSTALL_PREFIX=${PROJECT_BINARY_DIR}/eprosima_installer/${platform}/install -DRPCPROTO=${RPCPROTO} ${_USE_FASTRTPS} ${_USE_RTIDDS} ../../../..
        COMMAND ${CMAKE_COMMAND} --build . --target install --config Release
        COMMAND ${CMAKE_COMMAND} --build . --target install --config Debug
        WORKING_DIRECTORY ${PROJECT_BINARY_DIR}/eprosima_installer/${platform}
        )

    add_dependencies(${PROJECT_NAME}_${platform} ${PROJECT_NAME}_${platform}_dir)
endmacro()

macro(install_msvc_libraries platform)
    install(DIRECTORY ${PROJECT_BINARY_DIR}/eprosima_installer/${platform}/install/${BIN_INSTALL_DIR}/
        DESTINATION ${BIN_INSTALL_DIR}
        COMPONENT libraries_${platform}
        )

    install(DIRECTORY ${PROJECT_BINARY_DIR}/eprosima_installer/${platform}/install/${LIB_INSTALL_DIR}/
        DESTINATION ${LIB_INSTALL_DIR}
        COMPONENT libraries_${platform}
        )

    string(TOUPPER "${platform}" ${platform}_UPPER)
    set(CPACK_COMPONENT_LIBRARIES_${${platform}_UPPER}_DISPLAY_NAME "${platform}" PARENT_SCOPE)
    set(CPACK_COMPONENT_LIBRARIES_${${platform}_UPPER}_DESCRIPTION "eProsima ${PROJECT_NAME_LARGE} libraries for platform ${platform}" PARENT_SCOPE)
    set(CPACK_COMPONENT_LIBRARIES_${${platform}_UPPER}_GROUP "Libraries" PARENT_SCOPE)
endmacro()
