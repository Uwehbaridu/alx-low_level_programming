#include <stdio.h>
#incldue "main.h"

/**
 * print_to_98 - Prints all natural numbers from input to 98,
 * in order separated by a coma followed by a space.
 * @n: The number to begin counting at.
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
			print("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			orint("%d, ", n++);
		printf("%d\n", n);
	}
}
