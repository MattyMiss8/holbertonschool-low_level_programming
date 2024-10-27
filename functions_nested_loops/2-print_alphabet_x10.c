#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - check the code
 *
 * Description: print alphabet 10 times
 *
 * Return: Always 0 (Success)
 *
*/

void print_alphabet_x10(void)
{
int count = 1;

while (count <= 10)
{
char letter = 'a';

while (letter <= 'z')
{
_putchar(letter);
letter++;
}

_putchar('\n');
count++;
}
}
