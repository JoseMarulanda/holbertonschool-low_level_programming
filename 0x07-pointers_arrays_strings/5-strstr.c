#include "holberton.h"
/**
 * _strstr: locates a substring
 * @haystack: the string
 * @needle: the substring
 * Return: pointer to substring or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int len;

	len = 0;
	while (needle[len] != '\0')
		len++;
	while (*haystack != '\0')
	{
		if (_strncmp(haystack, needle, len) == 0)
			return (haystack);
		haystack++;
	}
	return (NULL);
}
