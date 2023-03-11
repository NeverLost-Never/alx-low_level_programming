#include <unistd.h>
#include <stdio.h>
/**
 * main - entry point
 * @argc: a number input
 * @argv: an array of strings
 * Return: always 0 (success)
 */
int main(int argc, char **argv)
{
	if (argc < 1)
		return (0);
	printf("%s\n", argv[0]);
	return (0);
}
