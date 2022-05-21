#include "main.h"
/**
 * _putchar - prints a single character
 * @c: the character to be printed
 * Return: int
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
