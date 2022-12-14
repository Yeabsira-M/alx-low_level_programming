#include "main.h"

/**
 * print_last_digit - prints the last digit of a num
 * @n: the num to be inserted
 * Return: value of the last digit of a num
 */
int print_last_digit(int a)
{
	int last;

	last = a % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
