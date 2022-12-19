#include "main.h"

/**
 * swap_int - swap value of given integers
 * @a: number 1
 * @b: number 2
 * num: temporary variable
 */
void swap_int(int *a, int *b)
{
	int num;

	num = *a;
	*a = *b;
	*b = num;
}
