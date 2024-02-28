#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: character to print
 * Return: 1 on success, -1 on error
 */
int _putchar(char c)
{
    return write(1, &c, 1);
void print_most_numbers(void)
{
    int num;
    for (num = 0; num <= 9; num++)
    {
        if (num != 2 && num != 4)
        {
            _putchar(num + '0');
        }
    
 }
    _putchar('\n');
}
int main(void)
{
    print_most_numbers();
    return (0);
}
