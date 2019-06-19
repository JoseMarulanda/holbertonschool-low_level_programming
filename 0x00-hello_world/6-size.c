#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch;
int in;
long int li;
long long int lli;
float fl;
printf("Size of char: %lu bytes\n", (long int) sizeof(ch));
printf("Size of int: %lu bytes\n", (long int) sizeof(in));
printf("Size of long int: %lu bytes\n", (long int) sizeof(li));
printf("Size of long long int: %lu bytes\n", (long int) sizeof(lli));
printf("Size of float: %lu bytes\n", (long int) sizeof(fl));
return (0);
}
