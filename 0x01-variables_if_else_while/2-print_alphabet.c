#include <stdio.h>
/**
 * main - Entry point
 * description: 'print alphabet lowercase'
 * Return: always 0
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		putchar('\n');
		n++;
	}
	return (0);
}
