#include "main.h"
#include <string.h>

/**
 * print_rev - function that prints a string, in reverse
 * @s: string to reverse
 *
 * File: 4-print_rev.c
 *  Auth: Zuhair Ahmed
 */
void print_rev(char *s)
{
	int leng, g;

	leng = strlen(s);

	for (g = leng - 1; g >= 0; g--)
		_putchar(s[g]);
	_putchar('\n');
}
