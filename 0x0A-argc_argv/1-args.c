#include <stdio.h>
/**
 * main - Entry point
 * @argc: The number of arguments passed to the main program
 * @argv: The program prints the number of argument passed to the terminal
 * Return: Success 0
 */
int main(int argc, char *argv[])
{
        int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		printf("%d\n", i);
	}
        return (0);
}

