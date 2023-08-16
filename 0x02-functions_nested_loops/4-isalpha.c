#include "holberton.h"
/**
 * _isalpha - tests whether acharacter-is-fromtheEnglish alphabet.
 * @c: character tobechecked.
 * Return: 1 ifthe character isan English-character.
 * 0 if the characteris notcharacter.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);

}
