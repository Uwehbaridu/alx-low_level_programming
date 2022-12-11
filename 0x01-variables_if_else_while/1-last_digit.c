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
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;
	if (a > 5)

	{
		printf("Last digit of %d is %d and is greater than 5\n", n, a);
	}

	else if (a == 0)

	{
		printf("Last digit of %d is %d and is 0\n", n, a);
	}

	else

	{
		printf("Last digit of %d and %d is less than 6 and not 0\n", n, a);
	}
	return (0);
}
