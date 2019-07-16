#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: the size of the array
 * @c: character to initialize
 * return: pointer to the array of chars
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size > 0)
	{
		p = malloc(size * sizeof(char));
		if (p == NULL)
			return (NULL);
	}
	else
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
}
