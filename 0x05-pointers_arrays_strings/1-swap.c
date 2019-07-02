#include "holberton.h"

/**
 * swap_int - swaps the values of two integers
 *@a: integer 1 to swap
 *@b: integer 2 to swap
 *Return: void
 */
void swap_int(int *a, int *b)
{
	int sw;

	sw = *a;
	*a = *b;
	*b = sw;
}
