#include <stdio.h>

#define PI 3.1415926
const unsigned int CONST_UNSIGNED_VAL_1 = 100u;

int main ()
{
    // DECLARATION AND INITALISATION
    int aValue = 42;
    double bValue = 0.123456f;
    const unsigned int CONST_UNSIGNED_VAL_2 = 2000u;
    int c = 1;

    // COMPUTATION
    aValue++;
    ++aValue;

    // OUTPRINTS
    printf("\n\thello world!\n\n");
    printf("This is my first integer :) %d\n", aValue);
    printf("This is my first float :) %f\n\n", bValue);

    printf("This is a Integer Literal DEC-style: %d\n", 42);
    printf("This is a Integer Literal HEX-style: %d\n\n", 0x2a);
    printf("This is a %s Literal.\n\n", "String");

    printf("This is my first CONST VAL const-main-scope-style :) %d\n", CONST_UNSIGNED_VAL_1);
    printf("This is my second CONST VAL const-main-scope-style :) %d\n", CONST_UNSIGNED_VAL_2);
    printf("This is my first CONST VAL macro-style :) %f\n\n", PI);

    printf("It is funny, because it is %s.\n\n", c == 1? "true" : "false");

    return 0;
}
