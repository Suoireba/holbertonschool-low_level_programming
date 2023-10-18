#include "main.h"
#include <stdio.h>
/**
 * print_alphabet -  program that prints _putchar, followed by a new line
 *
 *
 */

void print_alphabet_x10(void)
{
	int i;
	int n;

	for (n = 0; n < 11; n++)
	{

		for (i = 97; i <= 122; i++)
		{
			_putchar(i);

		}
		putchar('\n');
	}
}
