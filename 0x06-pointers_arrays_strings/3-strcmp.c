#include "main.h"

/**
 * _strcmp - comapres pointers to two strings.
 * @s1: Apointer to the first string to be compared.
 * @s2: Apointer to the second string.
 *
 * Return: if str1 < str2,the difference of the first unmached car
 *      if str1 == str2, 0.
 *      if str1 > str2, the positive diff of the first unmached char
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
