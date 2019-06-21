#include <stdio.h>
/**
 *main - Entry point
 *
 *This program will print all posible combinations
 *of single digits numbers
 *Return: 0
 */
int main(void)
{
int num = '0';
while (num <= '9')
{
putchar(num);
if (num != '9')
{
putchar(',');
putchar(' ');
}
num++;
}
putchar('\n');
return (0);
}
