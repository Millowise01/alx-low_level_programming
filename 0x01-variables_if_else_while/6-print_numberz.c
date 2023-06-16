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

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
