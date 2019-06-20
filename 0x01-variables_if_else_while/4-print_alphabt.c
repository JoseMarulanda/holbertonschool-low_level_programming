#include <stdio.h>
/**
 *main - Entry point
 *
 *Desciption: this program print all letters
 *except for q and e.
 *Return: 0 upon successful completion
 */
int main(void)
{
char x = 'a';
while (x <= 'z')
{
if (x == 'e' || x == 'q')
else
{
putchar(x);
x++;
}
}
putchar('\n');
return (0);
}
