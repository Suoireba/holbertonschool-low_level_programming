#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isalpha - Check for alphabetic character 
 * @c: The character t be checked .
 * Return: For alphabetic character , 0 otherwise.
 */
int _isalpha(int c)
{
	int e;

	if (isalpha(c))
	{
		e = 1;
	}
	else
	{
		e = 0;
	}
	return (e);

}
