#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _islower - Checks for lowercase character
 * @c: The character to be checked.
 *Return: 1 if character is lowercase , 0 otherwise.
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
