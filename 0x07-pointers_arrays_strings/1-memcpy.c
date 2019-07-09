#include "holberton.h"

/**
 * _memcpy - copies memory area
 * @dest: destination memory area
 * @src: source to copy
 * @n: bytes
 * Return: poitner to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		src[i] = dest[i];
	return (dest);
}
