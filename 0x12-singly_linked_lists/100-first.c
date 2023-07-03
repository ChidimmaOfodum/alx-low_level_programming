#include <stdio.h>
void my_function(void) __attribute__((constructor));

/**
 * my_function - a function that is implemented before the main
 */

void my_function(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("I bore my house upon my back!\n");
}
