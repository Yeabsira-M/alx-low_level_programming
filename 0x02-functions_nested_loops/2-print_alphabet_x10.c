#include "main.h"

/**
 * print_alpabet_x10 - alphabet 10x
 * Return: void
 */
void print_alphabet_x10(void)

{
	char ch;
	int j = 0;

	while (j <= 9)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		j++;
	}
}
