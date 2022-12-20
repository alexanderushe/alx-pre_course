#include "main.h"

/**
 * _strlen - function that returns the length of string
 * @s: input
 * Return: length of s
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
