#include "main.h"

/**
 * leet - encodes a string.
 * @str: the string to coded.
 * Return: apointer to the coded strng.
 */
char *leet(char *str)
{
	int indx1 = 0, indx2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[indx1])
	{
		for (indx2 = 0; indx2 <= 7; indx2++)
		{
			if (str[indx1] == leet[indx2] ||
					str[indx1] - 32 == leet[indx2])
				str[index1] = indx2 + '0';
		}
		indx1++;
	}
}
