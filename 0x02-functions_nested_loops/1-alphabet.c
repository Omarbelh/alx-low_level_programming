#include "main.h"
/**
 
main - prints the alphabet, in lowercase
followed by a new line.
Return: Always 0 (succes)
*/
void print_alphabet(void)
{
	int a;

	for ( a=97; a<=122; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
	return (0);
}

int main()
{
	print_alphabet();
	return 0;
}
