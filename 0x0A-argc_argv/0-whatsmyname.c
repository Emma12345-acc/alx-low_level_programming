#include <stdio.h>
/**
 * main - Entry point
 * @argc: The number of arguments passed to the main program
 * @argv: The number of index of arguments passed in the terminal
 * Return: Success 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}

