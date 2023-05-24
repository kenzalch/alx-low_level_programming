#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int bytes, j;
	char *ar;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ar = (char *)main;

	for (j = 0; j < bytes; j++)
	{
		if (j == bytes - 1)
		{
			printf("%02hhx\n", ar[j]);
			break;
		}
		printf("%02hhx ", ar[j]);
	}
	return (0);
}
