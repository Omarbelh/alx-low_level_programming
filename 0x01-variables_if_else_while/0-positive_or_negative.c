#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0) {
		printf("%2d is positive \n", n/10000000);
	} 
	else if (n==0) {
		printf("%2d is zero \n", n/10000000);
	} 
	else if (n<0) {
		printf("%2d is negative \n", n/10000000);
	}
	return (0);
}