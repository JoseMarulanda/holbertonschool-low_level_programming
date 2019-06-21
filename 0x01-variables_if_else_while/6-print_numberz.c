#include <stdio.h>
/**
 *main - Entry point
 *
 *This prints all single digit numbers of base 10
 *staring from 0, followed by new line
 *Return: 0
 */
int main(void)
{
int num = '0';
while (num <= '9')
{
putchar(num);
num++;
}
putchar('\n');
return (0);
}
