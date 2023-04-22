#include <stdio.h>

/**
 *main - Entry point
 *Description: prints alphabets excluding q and e
 *Return:0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' &&  c != 'e')
		{
			putchar(c);
		}
	}
	putchar('\n');
}
