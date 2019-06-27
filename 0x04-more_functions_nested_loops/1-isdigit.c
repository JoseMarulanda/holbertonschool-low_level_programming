#include "holberton.h"
/**
 * _isdigit - this program checks for a digit (0 through 9).
 *
 * @c: integer to tet
 * Return: 1 if is a digit if not return 0
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
