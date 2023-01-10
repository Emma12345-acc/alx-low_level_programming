#include <stdio.h>
/**
 * main - Entry point
 * @argc: The number of arguments passed to the main program
 * @argv: print all arguments including the first one
 * Return: Success 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}


