#include "holberton.h"
/**
 * _strcmp - compare two strings
 * @s1: string compared
 * @s2: string to compare with
 * Return: the difference
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]; i++)
		;
	return (s1[i] - s2[i]);
}
