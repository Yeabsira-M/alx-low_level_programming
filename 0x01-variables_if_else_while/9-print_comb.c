#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0;

	 while (a < 10)
	 {
		 putchar(48 + a);
		 if (a != 9)
		 {
			 putchar(',');
			 putchar(' ');
		 }
		 a++;
	 }
	 return (0);
}
