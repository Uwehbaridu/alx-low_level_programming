#include <stdio.h>
/**
 * main - Write a program that prints all single digit numbers of base 10
 *
 * Return: Always return 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar("%d", num);

	putchar('\n');

	return (0);
}