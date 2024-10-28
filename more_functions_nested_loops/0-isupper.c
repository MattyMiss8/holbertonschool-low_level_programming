#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks if character is uppercase
 *
 * @c: character to check
 *
 * Return: Always Success (0)
 *
 */

int _isupper(int c)
{

int c;

c = 'A';
putchar("%c: %d\n", c, _isupper(c));

c = 'a';
putchar("%c: %d\n", c, _isupper(c));

return (0);
}
