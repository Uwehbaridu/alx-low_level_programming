#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: print the last digit in random number
 *
 * Return: Always return 0 (Sucess)
 */

int main(void)
{
	int n, Last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Last = n % 10;
	if (Last > 5)
		printf("last digit of %d is %d and is greater than 5\n", n, Last);
	else if (Last == 0)
		printf("Last digit of %d is %d and is 0\n", n, Last);
	else if (Last < 6 && Last != 0)
		printf("last digit of %d and %d is less than 6 and not 0\n", n, Last);
	return (0);
}
