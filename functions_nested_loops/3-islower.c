#include "main.h"
#include <stdio.h>

/**
 * _islower - check the code
 *
 * Description: write a function that checks for lowercase character
 *
 * @c: checks for charater
 *
 * Return: Always 0 (Success)
 *
*/

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
