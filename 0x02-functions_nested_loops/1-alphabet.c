#include "main.h"
/**
 * main - prints the alphabet, in lowercase
 * followed by a new line.
 * Return: Always 0 (succes)
 */
void print_alphabet(void)
	
{
	for (int a=97; a<=122; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
	return (0);
}
