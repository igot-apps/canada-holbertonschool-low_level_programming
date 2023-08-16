#include "holberton.h"
/**
 * print_last_digit - prilast diginumer.
 * @n: digit to findthastplace of.
 * Return: The last digit.
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = n * -1;
	_putchar((n % 10) + '0');
	return (n % 10);
}
