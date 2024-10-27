#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - check the code
 *
 * Description: print the last digit of a number
 *
 * @r: the number to check
 *
 * Return: Always 0 (Success)
 *
*/

int print_last_digit(int r)
{
int n = r % 10;
if (n < 0)
n = -n;
_putchar('0' + n);
return (n);
}
