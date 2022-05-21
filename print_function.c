#include <limits.h>
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
void _vprintf(const char *format,__attribute__((unused)) va_list arg)
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
	va_start(arg, format);

	_vprintf(format, arg);





	va_end(arg);
	return (0);
}
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    /*_printf("Unknown:[%r]\n");*/
    /*printf("Unknown:[%r]\n");*/
    return (0);
}


