#include "main.h"

/**
 * _isupper - check if parameter is an uppercase character.
 * @c: input character.
 * Return: 1 if is anuppercase character, 0 in other case.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
