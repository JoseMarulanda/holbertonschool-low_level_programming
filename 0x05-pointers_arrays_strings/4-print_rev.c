#include "holberton.h"
/**
 * print_rev - prints a string, in reverse.
 * @s: characters of the string
 * Return: void
 */
void print_rev(char *s)
{
	int i;

		while (s[i] != '\0')
		{
			i++;
		}
	i--;
	while (s[i] != '\0')
	{
		_putchar(s[i--]);
	}
	_putchar('\n');
}
