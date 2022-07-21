#include "main.h"

/**
 * _puts_recursion - a function that uses recursion to print a new line
 * @s: parameter one
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n')
			return;

	}
	_putchar(*s)
		s++
		_puts_recursion(s);
}

