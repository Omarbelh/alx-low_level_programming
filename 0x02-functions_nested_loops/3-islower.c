#include "main.h"
/**
 * _islower - function that checks for lowercase character.
 * Returns 1 if c is lowercase
 * Returns 0 otherwise
 */
int _islower(int c)
{
	int a;
	
	for (a = 97; a <= 122; a++)
	{
		if (c == a)
		{
			return 1;
		}
	}
	return 0;
}
