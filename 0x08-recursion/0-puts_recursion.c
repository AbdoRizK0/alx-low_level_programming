#include "main.h"

/**
 * _put_recursion - prints a string
 * Return void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*S);
		_puts_recursion(s + 1);
	}
}
