#include <stdio.h>
/**
 * main - Entry point
 * this program print the alphabet
 * from a to z
 * Return: Always 0 (Success)
 */
int main(void)
{
char x = 'a';
while (x <= 'z')
{
putchar(x);
x++;
}
putchar('\n');
return (0);
}
