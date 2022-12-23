#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 Success
 *
 */

int main(void)
{

	int i;

	int j;

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (i > j)
				continue;
			putchar(i + '0');
			putchar(j + '1');
			if (i <= 7)
				putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

