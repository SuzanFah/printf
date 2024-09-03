#include "main.h"

int main(void)
{
    /* Existing tests */
    _printf("Character: %c\n", 'A');
    _printf("String: %s\n", "Hello, World!");
    _printf("Percent: %%\n");

    /* New tests for %d and %i specifiers */
    _printf("Integer: %d\n", 12345);
    _printf("Negative Integer: %i\n", -6789);
    _printf("Zero: %d\n", 0);
    _printf("Max Int: %d\n", 2147483647);
    _printf("Min Int: %i\n", -2147483647 - 1);  /* New test case */

    return (0);
}

