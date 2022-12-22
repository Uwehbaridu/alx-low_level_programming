#include <stdio.h>
#include "main.h"

/**
 * main - takes date and prints days remaining in a year, considering leap year
 *
 * Return: 0
 */
int main(void)
{
	int month;
	int day;
	int year;

	month = 4;
	day = 01;
	year = 1997;

	printf("Date: %02d/%02d/%04d\n", month, day, year);

	day = conver_day(month, day);
	print_remaining_day(month, day, year);

	return (0);
}