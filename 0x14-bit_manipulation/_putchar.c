#include "main.h"
#include <unistd.h>
/**
 * _putchar - to write the char c to stdout
 * @c: its the char to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
