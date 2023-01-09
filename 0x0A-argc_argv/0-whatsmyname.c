#include <stdio.h>
/**
 * main - Entry point
 * @argc: The number of arguments passed to the main program
 * @argv: The number of index of arguments passed in the terminal
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("argc[%d] = %s\n", i, argv[i]);
	}
	return (0);
}

