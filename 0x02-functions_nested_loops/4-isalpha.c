#include "main.h"

/**
 * _isalpha - check for alpabet char
 * @c: the char to be checked
 * Return: 1 for alpha char or 0 for anythign
 */
int _isalpha(int c)
{
	if ((c > 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
