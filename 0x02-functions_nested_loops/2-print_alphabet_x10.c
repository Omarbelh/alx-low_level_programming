#include "main.h"
/**
 * print_alphabet - prints 10 times the alphabet, in lowercase
 * followed by a new line
 */
void print_alphabet_x10(void);
{
	int a;

	for (int e = 0; e <= 9; e++)
	{
		for (a = 97; a <= 122; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
