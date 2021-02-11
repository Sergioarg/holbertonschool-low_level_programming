#include "holberton.h"
/**
 * print_diagonal - this function print the line
 * @n: the parameter to print the backslahs
 */
void print_diagonal(int n)
{

	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
