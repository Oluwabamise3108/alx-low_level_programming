#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes here */
	m = n % 10;
	if (m > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	if (m == 0)
		printf("Last digit of %d is %d is 0\n", n, m);
	if (m < 6 && m != 0)
		printf("Last digit of %d is %d is less than 6 and not 0\n", n, m);
	return (0);

}