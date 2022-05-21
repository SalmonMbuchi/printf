#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include "main.h"
#include <stdlib.h>
/**
 *  - takes two arguments
 * @format: a character string
 * @argz: variable of type va_lise
 *Return: void
 */

/**
 * _printf - produces ouput according to a format
 * @format: character string
 * Return: int
 */

int _printf(const char *format, ...)
{
	va_list argz;
	int k = 0;

	format_ted ar[] = {
		{"c", ch},
		{"s", str},
		{"d", _int},
		{"b", _bin},
		{"i", _int},
		{"u", _ui},
		{"o", _oct},
		{"x", _hex_l},
		{"X", _hex_u},
		{"R", _rot13},
		{NULL, NULL}
	};

	if (format == NULL)
		return (-1);
	va_start(argz, format);
	k = print_out(format, ar, argz);
	va_end(argz);
	return (k);
}
