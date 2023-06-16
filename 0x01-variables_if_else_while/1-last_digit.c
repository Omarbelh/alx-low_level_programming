#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints the last digit of a randomly generated number
 *        and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n, Lstdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Lstdigit = n % 10;
	if (Lstdigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, Lstdigit);
	}
	else if (Lstdigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, Lstdigit);
	}
	else if (Lstdigit < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, Lstdigit);
	}
	return (0);
}
