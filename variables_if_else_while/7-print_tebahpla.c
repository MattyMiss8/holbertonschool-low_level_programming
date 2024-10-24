#include <stdio.h>

/**
 * main - print alphabet in lowercase and in reverse
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
char alphabet;

for (alphabet = 'z' ; alphabet >= 'a' ; alphabet--)
{
putchar(alphabet);
}
putchar('\n');
return (0);
}
