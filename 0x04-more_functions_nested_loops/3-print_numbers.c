#include <stdio.h>
#include "main.h"

/**
*prin_numbers - print from 0 - 9
*
*Return: returns void
*/

void print_numbers(void)
{
int n;
for (n = 48; n < 58; n++)
{
putchar(n);
}
putchar(10);
}
