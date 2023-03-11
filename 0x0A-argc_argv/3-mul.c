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
	if (argc == 3)
		printf("%d\n", ft_atoi(argv[1]) * ft_atoi(argv[2]));
	else
		printf("Error\n");
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
	int sign = 1;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		else
			digit = digit * 10 + (*s - 48);
		s++;
	}
	return (digit * sign);
}
