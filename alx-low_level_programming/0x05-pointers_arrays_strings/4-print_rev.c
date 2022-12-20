#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints string in revere
 * @s: pointer to string
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[c] != '\0')
	{
		i++;
	}

	for (c -= 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
