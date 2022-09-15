#include "main.h"

/**
 * print_diagonal - prints diagonal line n times.
 * @n: times diagonal line is printed.
 * print_line - prints straight line n times.
 * @n: times straight line is printed.
 * Return: no return.
 */
void print_diagonal(int n)
void print_line(int n)
{
	int i, j;
	int i;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (i < (n - 1))
			_putchar('\n');
		_putchar(95);
	}
	_putchar('\n');
}
