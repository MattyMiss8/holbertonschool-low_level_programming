#include "main.h"
#include <stdio.h>

/**
 * times_table - check the code
 *
 * Description: prints the 9 times table starting at 0
 *
 * Return: Always 0 (Success)
 *
 */

void times_table(void)
{
int i, j, product;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
product = i * j;

if (product < 10)
{
if (j != 0)
_putchar(' ');
_putchar(product + '0');
}
else
{
_putchar((product / 10) + '0');
_putchar((product % 10) + '0');
}
if (j != 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
