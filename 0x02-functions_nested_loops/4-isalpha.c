#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 * @c: the caracter to be chacked.
 * Return: 1 if c is a letter lowercase or uppercas, 0 otherwise.
*/

int _isalpha(int c)

{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		if (c == n)
		{
			return (1);
		}
	}
	for (n = 'A'; n <= 'Z'; n++)
	{
		if (c == n)
		{
			return (1);
		}
	}
	return (0);
}
