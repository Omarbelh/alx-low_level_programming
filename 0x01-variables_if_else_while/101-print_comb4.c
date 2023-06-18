#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits,
 * start in 001, to 789,
 * following by new line,
 * Return: Always 0 (success)
 */
int main(void)
{
        int i, j, n, m;

        n = '1';
        i = '0';
        m = '0';
        
        while (m <= '7')
        {
            while (i <= '8')
            {
                for (j = n; j <= '9'; j++)
                {
                        putchar(m);
                        putchar(i);
                        putchar(j);
                        if (m == '7' && i == '8' && j == '9')
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
            m++;
            n = '1';
            i = '0';
        }
        
        return (0);
}
