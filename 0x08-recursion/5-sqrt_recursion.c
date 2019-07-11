#include <stdio.h>
/**
 * tester - tests the input
 * @n: number compared
 * @base: base to check
 * Return: natural square root of a number
 */
int tester(int n, int base)
{
	if (n * n == base)
		return (n);
	if (n * n > base)
		return (-1);
	return (tester(n + 1, base));
}
/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: number to check for square roots.
 * Return: the natural square root of number n
 */
int _sqrt_recursion(int n)
{
	return (tester(1, n));
}
