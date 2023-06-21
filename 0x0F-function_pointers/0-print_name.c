#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_name - calls a function with its pointer
 * @name: name to be printed
 * @f: function pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
