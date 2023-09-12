#include "main.h"

/**
 * _isalpha - checks for letter or lowercase or uppercase character
 * @c: the character to check
 * Return: 1 if c is letter , 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
