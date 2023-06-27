#include <stdio.h>
/**
 * print_array - fxn prnting array
 *@a:array
 *@n:array size
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
		printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
	}

}

