#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include "main.h"
#include <stdlib.h>
/**
 * print_out - checks specifiers
 * @format: character string
 * @print_arr: an arrar of struct
 * @argz: va_list variable
 * Return: void
 */
int print_out(const char *format, fmt_t *print_arr, va_list argz)
{
	char a;
	int digit = 0, b = 0, c = 0;

	a = format[b];
	while (a != '\0')
	{
		if (a == '%')
		{
			c = 0;
			b++;
			a = format[b];
			while (print_arr[c].type != NULL &&
				a != *(print_arr[c].type))
				c++;
			if (print_arr[c].type != NULL)
				digit = digit + print_arr[c].f(argz);
			else
			{
				if (a == '\0')
					return (-1);
				if (a != '%')
					digit += _putchar('%');
				digit += _putchar(a);
			}
		}
		else
			digit += _putchar(a);
		b++;
		a = format[b];
	}
	return (digit);
}
/**
 * _printf - produces ouput according to a format
 * @format: character string
 * Return: int
 */

int _printf(const char *format, ...)
{
	va_list argz;
	int k = 0;

	fmt_t ar[] = {
		{"c", ch},
		{"s", str},
	       /**
		*{"d", _int},
		*{"b", _bin},
		*{"i", _int},
		*{"u", _ui},
		*{"o", _oct},
		*{"x", _hex_l},
		*{"X", _hex_u},
		*{"R", _rot13},
		*{NULL, NULL}
		*/
	};

	if (format == NULL)
		return (-1);
	va_start(argz, format);
	k = print_out(format, ar, argz);
	va_end(argz);
	return (k);
}
