#include "holberton.h"
/**
 * _islower(int c) - this program checks for
 * lower character
 * @c: test
 * Return: 1 if is a lowercase if not return 0
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
