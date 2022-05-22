#include "main.h"
/**
 * _int - function to print integers
 * @integer: varable of type va_list
 * Return: int
 */
int _int(va_list integer)
{
	int f, expo = 1, length = 0;
	unsigned int y;

	f = va_arg(integer, int);

	if (f < 0)
	{
		length = length + _putchar('-');
		y = f * -1;
	}
	else
		y = f;
	while (y / expo > 9)
		expo *= 10;

	while (expo != 0)
	{
		length = length + _putchar(y / expo + '0');
		y = y % expo;
		expo = expo / 10;
	}
	return (length);
}
