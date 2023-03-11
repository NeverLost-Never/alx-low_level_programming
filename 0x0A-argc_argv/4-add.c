#include <unistd.h>
#include <stdio.h>
int ft_atoi(char *s);
/**
 * main - entry point
 * @argc: a number input
 * @argv: an array of strings
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int digit;
	int sum = 0;
	int i = 1;

	if (argc < 2)
		printf("%d\n", 0);
	else
	{
		while (i < argc)
		{
			digit = ft_atoi(argv[i]);
			if (digit == -1)
			{
				printf("Error\n");
				return (0);
			}
			sum += digit;
			i++;
		}
		printf("%d\n", sum);
	}
	return (0);
}
/**
 * ft_atoi - a function that converts string to int
 * @s: a string input
 * Return: an integer converted from the string
 */
int ft_atoi(char *s)
{
	int digit = 0;

	while (*s)
	{
		if (*s < '0' || *s > '9')
			return (-1);
		digit = digit * 10 + (*s - 48);
		s++;
	}
	return (digit);
}
