#include <stdio.h>

/**
 * main - solve it
 *
 * Description: alphabet letters
 *
 *Return: 0
*/
int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*print a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	/*print A - Z */
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
