/* Generated By:JJTree: Do not edit this line. ASTConstructedType.java Version 4.1 */
/* JavaCCOptions:MULTI=true,NODE_USES_PARSER=false,VISITOR=true,TRACK_TOKENS=false,NODE_PREFIX=AST,NODE_EXTENDS=,NODE_FACTORY= */
package com.eprosima.ddscs.idl.ast;

import com.eprosima.ddscs.idl.*;

////@SuppressWarnings("all")
public class ASTConstructedType extends SimpleNode {
  public ASTConstructedType(int id) {
    super(id);
  }

  public ASTConstructedType(IDLParser p, int id) {
    super(p, id);
  }


  /** Accept the visitor. **/
  public Object jjtAccept(IDLParserVisitor visitor, Object data) {
    return visitor.visit(this, data);
  }
}
/* JavaCC - OriginalChecksum=cb7bf64c404e188e4a443d43863a0d8a (do not edit this line) */
