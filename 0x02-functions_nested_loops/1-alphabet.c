#include "holberton.h"
/**
 * print_alphabet - prints the-englishalphabet from a-z.
 * Return: Nothing.
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
