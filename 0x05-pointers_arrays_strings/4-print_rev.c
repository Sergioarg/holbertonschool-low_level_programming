#include "holberton.h"
/**
 * print_rev - this characters in reverse.
 * @s: this is a parameter to change.
 *
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != 0)
		i++;

	while (i)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}