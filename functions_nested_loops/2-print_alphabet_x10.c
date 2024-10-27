#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - check the code
 *
 * Description: print alphabet 10 times
 *
 * Return: Always 0 (Success)
 *
*/

void print_alphabet_10x(void)
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
