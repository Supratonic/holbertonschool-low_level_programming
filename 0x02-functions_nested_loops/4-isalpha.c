#include "main.h"

/**
 *_isalpha - determines if character is alphabetic
 *@a: checked character
 *
 * Return: 1 if it is lower or uppercase letter, 0 otherwise
 */

int _isalpha(int a)
{
	if ((a >= 'a' && a <= 'z') ||
		(a >= 'A' && a <= 'Z'))
		return (1);
	else
		return (0);
}
