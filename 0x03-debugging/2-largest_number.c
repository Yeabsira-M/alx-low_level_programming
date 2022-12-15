#include "main.h"

/**
 * largest_number - returns largest of 3 nums
 * @a: first int
 * @b: second int
 * @c: third int
 * Return: largest num
 */

int largest_number(int a, int b, int c)
{
	int large:

		if (a > b && a > c)
		{
			large = a;
		}
		else if (b > c && b > a)
		{
			large = b;
		}
		else if (c > b)
		{
			large = c;
		}
		else
		{
			large = b;
		}
	return (large);
}
