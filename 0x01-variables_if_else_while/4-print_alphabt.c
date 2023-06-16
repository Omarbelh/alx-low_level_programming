#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, without e and q
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q') 
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
