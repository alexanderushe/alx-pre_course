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
	int x;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;

	for (x = i; o >= 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
