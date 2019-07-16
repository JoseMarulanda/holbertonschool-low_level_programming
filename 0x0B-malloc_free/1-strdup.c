#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: the string wich is going to be duplicated
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
	unsigned int len, i;
	char *p;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)
		;
	len++;
	if (len < 1)
		return (NULL);
	p = malloc(len * sizeof(char));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < len; i++)
		p[i] = str[i];
	p[i] = '\0';
	return (p);
}
