// macro concatenation
#include<stdio.h>
#define CONFIG_TRACE 1
#define concat_temp(x, y) x ## y
#define concat(x, y) concat_temp(x, y)

// macro testing
// See https://stackoverflow.com/questions/26099745/test-if-preprocessor-symbol-is-defined-inside-macro
#define CHOOSE2nd(a, b, ...) b
#define MUX_WITH_COMMA(contain_comma, a, b) CHOOSE2nd(contain_comma a, b)
#define MUX_MACRO_PROPERTY(p, macro, a, b) MUX_WITH_COMMA(concat(p, macro), a, b)
// define placeholders for some property
#define __P_DEF_0  X
#define __P_DEF_1  X,
#define __P_ONE_1  X,
#define __P_ZERO_0 X,
// define some selection functions based on the properties of BOOLEAN macro
#define MUXDEF(macro, X, Y)  MUX_MACRO_PROPERTY(__P_DEF_, macro, X, Y)

void main(){
	printf("Hello world\n");
        printf(MUXDEF(CONFIG_TRACE, "ON", "OFF"));
	printf("\n");
        printf(MUXDEF(0, "ON", "OFF"));
}
