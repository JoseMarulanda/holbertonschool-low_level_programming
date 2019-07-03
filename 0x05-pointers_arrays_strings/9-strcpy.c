#include "holberton.h"
#include <stdio.h>
/**
 * *_strcpy - copies the string pointed to the buffer
 * @dest: the pointer to string
 * @src: the pointer to buffer
 * Return: the value of the pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
