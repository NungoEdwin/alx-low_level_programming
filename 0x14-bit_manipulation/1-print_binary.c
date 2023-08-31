#include "main.h"
/**
 * print_binary -prints binary equivalent of a decimal no.
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, thecount = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = n >> i;

		if (current & 1)
		{
			_putchar('1');
			thecount++;
		}
		else if (thecount)
			_putchar('0');
	}


	if (!thecount)
		_putchar('0');
}

