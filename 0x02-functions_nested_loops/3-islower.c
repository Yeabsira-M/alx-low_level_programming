#include "main.h"

/**
 * _islower -checks for lower char
 * @c: the char to be checked
 * Return: 1 for lower char or 0 for anyting
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
