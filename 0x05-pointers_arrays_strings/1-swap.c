#include "main.h"
/**
 * swap_int- swaps the values of two integers
 * @a: pointer to 1st integer
 * @b: pointer to 2nd integer
 */

void swap_int(int *a, int *b)
{
	int temp = *b;

	*b = *a;
	*a = temp;
}
