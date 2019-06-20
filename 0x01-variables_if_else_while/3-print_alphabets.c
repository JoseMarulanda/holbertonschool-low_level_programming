#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: This program prints all the alphabet
 *from lowercase letters the uppercase
 *Return: 0 when run to successful completion
 */
int main(void)
{
char x = 'a';
while (x <= 'z')
{
putchar(x);
x++;
}
x = 'A';
while (x <= 'Z')
{
putchar(x);
x++;
}
putchar('\n');
return (0);
}
