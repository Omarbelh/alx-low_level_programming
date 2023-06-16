#include <stdio.h>
/**
 * main. putchar numberz from 0 to 9,
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
