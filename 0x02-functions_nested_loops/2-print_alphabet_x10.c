#include "main.h"

/**
 * print_alphabet_x10 - this is the a function
 */

void print_alphabet_x10(void)

{
int lin, ch;
for (lin = 0; lin <= 9; lin++)
{
for (ch = 'a'; ch <= 'z'; ch++)
_putchar(ch);
_putchar('\n');
}
}
