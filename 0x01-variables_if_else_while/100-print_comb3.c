#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits.
 *
 * Return: Always return 0 (Success)
 */

int main(void)
{
	int ones = '0'
	int tens = '0'

	for (tense = '0'; tens <= '9'; tense++)/*prints tens digits*/
	{
		for (ones = '0'; ones <= '9'; ones++)/*print tens digits*/
		{
			if (!((ones == tense) || (tens > ones)))/*eleminate repeatition*/
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '9' && tens == '8'))/* Add comma and space*/
				{

					putchar(',');
					putchar(' ');

				}
			}
		}
	}

	putchar('\n');

	return (0);

}



