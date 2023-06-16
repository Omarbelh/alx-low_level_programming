#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 * followed by new line,
 * Return: Always 0 (Success)
 */
int main(void)
{
    char lowcase;

    for (lowcase = '0';lowcase <= '9'; lowcase++)
    {
        putchar(lowcase);
    }

    lowcase = 'a';

    for (lowcase = 'a';lowcase <= 'f'; lowcase++)
    {
        putchar(lowcase);
    }

    putchar('\n');

    return 0;
}
