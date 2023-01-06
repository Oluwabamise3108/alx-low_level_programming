#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @s: string to be printed
 * Return: void
 */

void _puts(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
