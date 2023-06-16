#include <stdio.h>
/**
 * main - main entry point
 *
 * Prints numbers from 0 to 9.
 *
 * Return: Always 0 (if Successful)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
