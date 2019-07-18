#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenate 2 strings
 * @s1: string 1
 * @s2: string 2
 * @n: bytes
 * Return: pointer to new memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j, ns, x;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (n > j)
		n = j;
	ns = i + n;
	p = malloc(ns + 1);
	if (p == NULL)
		return (NULL);
	for (x = 0; x < ns; x++)
		if (x < i)
			p[x] = s1[x];
		else
			p[x] = s2[x - i];
	p[x] = '\0';
	return (p);
}
