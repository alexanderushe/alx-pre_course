#include "main.h"

/**
 * _puts - prints a string followed by a newline
 * @str: pointer to string
 * Return:void
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a])
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
