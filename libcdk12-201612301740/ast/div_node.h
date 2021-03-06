#ifndef __CDK12_AST_DIV_H__
#define __CDK12_AST_DIV_H__

#include <cdk/ast/binary_expression_node.h>

namespace cdk {

  /**
   * Class for describing the division operator
   */
  class div_node: public binary_expression_node {
  public:
    /** @see BinaryExpression */
    inline div_node(int lineno, expression_node *left, expression_node *right) :
        binary_expression_node(lineno, left, right) {
    }

    /**
     * @param sp semantic processor visitor
     * @param level syntactic tree level
     */
    void accept(basic_ast_visitor *sp, int level) {
      sp->do_div_node(this, level);
    }

  };

} // cdk

#endif
