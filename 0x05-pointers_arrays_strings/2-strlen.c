#include "holberton.h"
/**
 * _strlen - calculate the lenght of a string
 * @s: pointer to the character array.
 * Return: lenght of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
