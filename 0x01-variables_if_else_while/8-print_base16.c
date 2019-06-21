#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: This program prints all numbers of base 16
 *in lower case
 *Return: 0 upon succesful completion
 */
int main(void)
{
char num = '0';
char let = 'a';
while (num <= '9')
{
putchar(num);
num++;
}
while (let <= 'f')
{
putchar(let);
let++;
}
putchar('\n');
return (0);
}
