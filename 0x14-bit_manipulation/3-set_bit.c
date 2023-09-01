#include "main.h"
/**
 * set_bit - to set a bit at a given index bit to 1
 * @n: the pointer that point to the number to change
 * @index: the index of bit to set to 1
 *
 * Return: to 1 if successful, -1 if it fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
