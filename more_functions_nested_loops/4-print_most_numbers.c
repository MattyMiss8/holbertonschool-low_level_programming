#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - print 0 to 9 followed by new line, dont print 2 and 4
 *
 *
 *
 * Return: Always Success (0)
 *
*/

void print_most_numbers(void)
{
int c;
for (c = 48; c < 58; c++)
if (c != 50 && c != 52)
{
_putchar(c);
}
_putchar ('\n');
}
