#include "main.h"
#include "_putchar.c"
/**
 * print_array - fxn prnting array
 *@a:array
 *@n:array size
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i != --n)
			{
				printf("%d", a[i]);
				_putchar('\n');
			}
			else if (i == --n)
			{
				printf("%d", a[i]);
			}
		}
	}

}

