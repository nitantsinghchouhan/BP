
#include <stdio.h> 

#include "y.tab.h"

extern FILE *yyin;
extern FILE **yyout;
extern int yyparse(void);

int main() {

  yyparse();

}

