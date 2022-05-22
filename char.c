#include "main.h"
/**
 * ch - return a char
 * @character: list provided
 * Return: number of char printed
 */
int ch(va_list character)
{
	return (_putchar(va_arg(character, int)));
}
