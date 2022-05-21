#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#ifndef MAIN_H
#define MAIN_H
int _printf(const char *format, ...);
int _putchar(char c);
typedef struct fmt
{
	char *type;
	int (*f)();
} fmt_t;
int ch(va_list character);
int str(va_list string);
#endif
