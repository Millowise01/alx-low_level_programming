#include "main.h"
/**
 * print_last_digit - it prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
int digit;

	digit = n % 10;

	if (digit < 0)
		digit = -digit;

	_putchar(digit + '0');
	return (digit);
}
