#include "main.h"

/**
 * largest_number - return the largest of three numbers
 *
 * @a: first integer
 * @b: second integer
 * @c: third integer
 *
 * Return: largest number
 */

int largest_number(int a, int b, int c)

{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largesst = b;
	}
	else
	{
		largest = b;
	}

	return (largest);
}
