#include "main.h"
 /**
  * _puts - prints characters to stdout
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
