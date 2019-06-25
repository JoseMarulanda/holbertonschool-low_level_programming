#include "holberton.h"
/**
 * print_sign - print the sing of a number
 * @n: character to be checked.
 * Return: 1 if n is greater than 0.
 * Return 0 if n is zer a Return -1 if less
 * Than zero
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar ('+');
return (1);
}
else if (n == 0)
{
_putchar ('0');
return (0);
}
else if (n < 0)
{
_putchar ('-');
return (-1);
}
else
{
_putchar ('-');
return ('/');
}
}
