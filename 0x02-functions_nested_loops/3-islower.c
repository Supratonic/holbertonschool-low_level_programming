#include "main.h"

/**
 *_islower - checks if a character is lowercase.
 *@a: character to be checked
 *
 * Return: 1 if lowercase, 0 otherwise
 */
int _islower(int a)
{
	if (a >= 'a' && a <= 'z')
		return (1);
	else
		return (0);
}
