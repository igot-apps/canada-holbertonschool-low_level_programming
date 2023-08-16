#include "holberton.h"
/**
 * _islower - tests whetheracharacteris a
 * lowercase letter from theEnglishalphabet.
 * @c: character totest.
 * Return: 1 if it is alowercase letter, 0 ifitis notalowercase letter.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
