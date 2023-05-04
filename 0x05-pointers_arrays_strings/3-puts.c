#include "main.h"
/**
 * _putchar - prints characters to stdout
 * @str: characters to be printed
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
