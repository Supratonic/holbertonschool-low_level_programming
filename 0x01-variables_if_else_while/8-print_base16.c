#include <stdio.h>
/**
 * main - prints last digit of n and states whether
 * it's greater than 5 or less than 6 and not 0
 * Return: always 0
*/
int main(void)
{
int n;
char c;
for (n = 0; n <= 9; n++)
putchar((0 % 10) + '0');
for (c = 'a'; c <= 'f'; c++)
putchar(c);
putchar('\n');
return (0);
}
