#include "main.h"
#include <unistd.h>
/**
 * _putchar - to write the character c to stdout
 * @c: its the character to print
 *
 * Return: to 1 if successful
 * On error, -1 is to return, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
