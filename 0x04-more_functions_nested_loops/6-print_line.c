#include "main.h"

/**
 * print_line - prints straight line nx.
 *
 * @n: printed nx straight line.
 * Return: no return.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
