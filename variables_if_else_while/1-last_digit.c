#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is ", n);

	if (n % 10 > 5)
		printf("%d is greater than 5\n", n % 10);
	else if (n % 10 == 0)
		printf("%d is 0\n", n % 10);
	else
		printf("%d is 6\n", n % 10);
	return (0);
}
