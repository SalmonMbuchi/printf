#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
int _printf(const char *format, ...);
int _putchar(char c);
/**
 * struct fmt - checks for formats
 * @type: the print format
 * @f: print function to use
 */
typedef struct fmt
{
	char *type;
	int (*f)();
} fmt_t;
int ch(va_list character);
int str(va_list string);
int _int(va_list integer);
#endif
