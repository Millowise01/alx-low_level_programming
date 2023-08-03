#include "main.h"
/**
 * clear_bit - to set the value of a given bit to 0
 * @n: the pointer that point to the number to change
 * @index: the index of bit to clear
 *
 * Return: to 1 if successful, -1 if it fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
