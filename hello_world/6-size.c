#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
printf("Size of a char: %d\u byte(s)\n", sizeof(char));
printf("Size of an int: %d\u byte(s)\n", sizeof(int));
printf("Size of a long int: %d\u byte(s)\n", sizeof(long int));
printf("Size of a long long int: %d\u bytes(s)\n", sizeof(long long int));
printf("Size of a float: %d\u byte(s)\n", sizeof(float));
return (0);
}
