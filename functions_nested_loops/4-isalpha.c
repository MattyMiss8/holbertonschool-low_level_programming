#include "main.h"
#include <stdio.h>

/**
 * _isalpha - check the code
 *
 * Description: write a function that checks for lowercase character
 *
 * @c: checks for charater
 *
 * Return: Always 0 (Success)
 *
*/

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
