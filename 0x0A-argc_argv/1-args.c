#include <unistd.h>
#include <stdio.h>
/**
 * main - entry point
 * @argc: a number input
 * @argv: an array of strings
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	if (*argv != NULL)
		printf("%d\n", argc - 1);
	return (0);
}
