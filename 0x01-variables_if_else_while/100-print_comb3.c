#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits,
 * start in 01, to 89,
 * following by new line,
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, j, n;

	n = '1';
	i = '0';

	while (i <= '8')
	{
		for (j = n; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			if (i == '8' && j == '9')
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
		i++;
		n++;
	}
	return (0);
}
