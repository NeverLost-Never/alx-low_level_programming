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
	int i = 0;

	if (argc != 0)
	{
		while (i < argc)
			printf("%s\n", argv[i++]);
	}
	return (0);
}
