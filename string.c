#include "main.h"
/**
 * str - prints string to stdout
 * @string: list
 * Return: number of char
 */
int str(va_list string)
{
	int length;
	char *strs;

	strs = va_arg(string, char *);

	if (strs == NULL)
		strs = "(null)";
	length = 0;

	while (strs[length] != '\0')
		length = length + _putchar(strs[length]);
	return (length);
}
