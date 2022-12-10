#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - C program that prints the size of various types
 *
 * Return: Always return 0 (Success)
 */
int main(void)
{

	printf("Size of an int %i byte(s)\n", sizeof(int));
	printf("Size of a long int %i byte(s)\n", sizeof(long int));
	printf("Size of a long long int %i byes(s)\n", sizeof(long long int));
	printf("Size of a char %i byte(s)\n", sizeof(char));
	printf("Size of a float %i byte(s)\n", sizeof(float));
	return (0);
}
