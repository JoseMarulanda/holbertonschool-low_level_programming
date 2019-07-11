#include"holberton.h"
/**
 * _pow_recursion - returns x raised to the power of y
 * @x: value to return
 * @y the power
 * Return: return x
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if else(y == 0)
		{
			return (1);
		}
	else
		return (x * _pow_recursion(x, y - 1));
}