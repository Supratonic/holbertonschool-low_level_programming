#include <stdio.h>
/**
 * main - prints last digit of n and states whether
 * it's greater than 5 or less than 6 and not 0
 * Return: always 0
*/
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
if (c != 'e' && c != 'q')
putchar(c);
}
putchar('\n');
return (0);
}
