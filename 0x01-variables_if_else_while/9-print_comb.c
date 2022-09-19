#include <stdio.h>
/**
 * main - prints last digit of n and states whether
 * it's greater than 5 or less than 6 and not 0
 * Return: always 0
*/
int main(void)
{
int n;
for (n = 0; n <= 9; n++)
{
putchar((n % 10) + '0');
if (n == 9)
continue;
putchar(',');
putchar(' ');
}
return (0);
}
