#include "holberton.h"
/**
 * print_alphabet_x10 - this funtion print the alphabet x10 times
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char l;
	int n;

	for (n = 0; n <= 10; ++n)
	{
		for (l = 'a'; l <= 'z'; ++l)
		{
			_putchar(l);
		}
		_putchar('\n');
	}
}
