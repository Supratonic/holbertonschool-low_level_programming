#include "main.h"

/**
 *print_sign - print sign of number
 *
 *@a: number to be determined
 *
 *Return: 1 if positive
 *	0 if zero
 *	-1 if number is less than zero
 */

int print_sign(int a)
{
	if (a > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (a == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
