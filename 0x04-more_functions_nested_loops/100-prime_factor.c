#include <stdio.h>
/**
 * main - prints the largest prime factor of the number
 * Return:return 0
 */
int main(void)
{
	long l;
	long num = 612852475143;

	for (l = 2; l < num; l++)
	{
		if (num % l == 0)
			num /= l;
	}
	printf("%li", num);
	printf("\n");
	return (0);
}
