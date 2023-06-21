#include "function_pointers.h"
/**
 * print_name - calls a function with its pointer
 * @name: name to be printed
 * f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
