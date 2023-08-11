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

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
