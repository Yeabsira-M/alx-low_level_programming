#include "main.h"

/**
 * _isupper - uppercase letter
 * @ch: char to be checked
 *
 * Return: 0 or 1
 */
int  _isupper(int ch)
{
	char ch;

	if (ch >= 'A' && ch <= 'Z')
	{
		printf("'%c' is uppercase alphabet.", ch);
	}
	 else if (ch >= 'a' && ch <= 'z')
	 {
		 printf("'%c' is lowercase alphabet.", ch);
	 }
	else
	{
		printf("'%c' is not an alphabet.", ch);
	}
	return (0);
}
