#include <stdio.h>
#include <stdlib.h>

/**
 * main - return alphabet both except e and q
 *
 * Return: A lways 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if ((ch != 'e') && (ch != 'q'))
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
