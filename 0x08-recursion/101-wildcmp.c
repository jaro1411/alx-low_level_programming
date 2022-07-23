#include "main.h"

/**
 * is_palindrome - checks string if palindrome
 * @s :parameter one
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int get_length(char *s);
	int my_pal(char *s, int l);
	int length;

	length = get_length(s) - 1;
	return (my_pal(s, --length));
}

/**
 * get_length - gets length of string
 * @s: parameter one
 * Return: return length of string
 */

int get_length(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (1 + get_length(++s));
}
/**
 * my_pal  - recursive check for palindrome
 * @s: string
 * @l: parameter
 * Return: 1 if palindrome, 0 if not
 */

int my_pal(char *s, int l)
{
	if (*s == *(s + l))
	{
		if (l <= 0)
			return (1);
		else
			return (my_pal(++s, l - 2));
	}
	else
		return (0);
}
