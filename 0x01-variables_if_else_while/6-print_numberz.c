#include <stdio.h>
/**
 * main - prints all single digit numbers of base
 * followed by new line,
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
