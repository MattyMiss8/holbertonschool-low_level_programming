#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print numbers from 0 to 9, followed by a new line
 *
 *
 *
 * Return: Always Success (0)
 *
*/

void print_numbers(void)
{
int c;
for (c = '0'; c < '10'; c++)
{
_putchar(c);
}
_putchar ('\n');
}
