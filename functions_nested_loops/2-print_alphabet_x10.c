#include "main.h"
/**
 * print_alphabet -  program that prints _putchar, followed by a new line
 *
 *
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 11; i++)
	{

		for (i = 97; i <= 122; i++)
		{
			_putchar(i);

		}
		putchar('\n');
	}
}
