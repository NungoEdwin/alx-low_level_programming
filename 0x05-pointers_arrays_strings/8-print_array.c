#include "main.h"
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
				printf("%d, ", a[i]);
			}
			else if (i == --n)
			{
				printf("%d", a[i]);
			}
		}
		printf("\n");
	}
	else
		printf(" \n");

}

