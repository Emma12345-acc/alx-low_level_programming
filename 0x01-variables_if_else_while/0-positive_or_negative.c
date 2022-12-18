#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* More headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n > 0)

		printf("This %d is a positive  number \n", n);
	else if (n == 0)

		printf("This %d number is zero\n", n);

	else

		printf("This %d is a negative number\n", n);

	return (0);

}
