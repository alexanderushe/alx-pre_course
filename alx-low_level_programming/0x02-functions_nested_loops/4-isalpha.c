#include "main.h"

/**
 * _isalpha - check for lower case letter
 * @c : character to check for
 * Return: 1 or 0
 */

int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
