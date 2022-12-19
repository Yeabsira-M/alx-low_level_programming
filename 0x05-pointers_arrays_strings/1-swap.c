#include "main.h"

/**
 * swap_int - swap value of given integers
 * @x: number 1
 * @y: number 2
 * num: temporary variable
 */
void swap_int(int *x, int *y)
{
	int num;

	num = *x;
	*x = *y;
	*y = num;
}
