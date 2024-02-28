#include "main.h"
/**
 * print_diagonal - Draws a diagonal line using the \ character.
 * @n: The number of \ characters to be printed.
 */
void print_diagonal(int n)
{
int b, c;
if (n > 0)
{
for (b = 0; b < n; c++)
{
for (c = 0; c < b; c++)
_putchar(' ');
_putchar('\\');
if (b == n - 1)
continue;
_putchar('\n');
}
}
_putchar('\n');
}
