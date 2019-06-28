#include "holberton.h"
/**
 * _isupper - this program checks for uppercase character
 *
 * @c: integer to test
 * Return: 1 if is a uppercase if not return 0
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
