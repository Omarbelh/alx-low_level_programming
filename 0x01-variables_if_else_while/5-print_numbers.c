#include <stdio.h>
/**
 * main - print numbers from 0 to 9,
 * followed by a new line,
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
