#include "holberton.h"
/**
 * _puts - prints a string
 * @str: the string
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
