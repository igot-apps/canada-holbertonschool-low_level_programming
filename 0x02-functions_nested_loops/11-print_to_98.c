#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - print-from-to-98.
 * @n: the number-to to 98
 * Return: void returns nothing.
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
			printf("%d, ", n);
		printf("%d\n", 98);
	}
	else
	{
		for (n = n; n > 98; n--)
			printf("%d, ", n);
		printf("%d\n", 98);
	}
}
