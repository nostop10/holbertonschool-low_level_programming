#include "main.h"
/**
 * print_diagonal - Draws a diagonal line using the \ character.
 * @n: The number of \ characters to be printed.
 */
void print_diagonal(int n)
{
int x;
int z;
if (n <=  0)
_putchar('\n')
for (x = 0; x < n; n++)
{
for (z = 0; z < x; z++)
_putchar(' ');
_putchar('\\');
_putchar('\n');
}
