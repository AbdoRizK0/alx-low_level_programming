#include <stdio.h>

/**
 * main - solve it
 *
 * Description: digits
 *
 *Return: 0
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0');
		digit++;
	}
	printf("\n");

	return (0);
}
