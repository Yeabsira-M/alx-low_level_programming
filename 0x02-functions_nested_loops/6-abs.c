#include "main.h"

/**
 * _abs - computs the absolute value of intger
 * @c: the numbr to be computed
 * Return: absolute value of a numbr
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);

}
