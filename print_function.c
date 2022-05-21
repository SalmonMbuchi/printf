#include <stdio.h>
#include <stdarg.h>
#include "main.h"
#include <stdlib.h>
/**
 * _vprintf - takes two arguments
 * @format: a character string
 * @arg: variable of type va_lise
 *Return: void
 */
void _vprintf(const char *format, va_list arg)
{
	/* state = 0 if normal and state = 1 for escape sequence*/
	int state = 0;

	while (*format)
	{
		if (state == 0)
		{
			if (*format == '%')
			{
				state = 1;
			}
		else
			{
			putchar(*format);
			}
		}
		format++;
	}
}


/**
 * _printf - produces ouput according to a format
 * @format: character string
 * Return: int
 */

int _printf(const char *format, ...)
{
	va_list arg;
	va_start(arg, format)

	_vprintf(format, arg);





	va_end(arg);
	return ();
}



