#include "main.h"

/**
 * _islower - check if char is lowercase
 * @c: is the char to be checked
 * Return: 1 if char is lowercase, otherwise 0.
 */

int _islower(int c)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		if (c == a)
		{
			return (1);
		}
	}
	return (0);
}
