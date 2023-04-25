#include <stdio.h>
 void print_alphabet(void)
        {
                char i;

                for (i = 'a'; i <= 'z'; i++)
                {
                        putchar(i);
                }
                putchar('\n');
        }

void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			putchar(j);
		}
		putchar('\n');
	}
}
