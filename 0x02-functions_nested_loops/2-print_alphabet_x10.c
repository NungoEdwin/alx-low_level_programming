#include "main.h"
/**
 * print_alphabet_x10 - mamama
 *
 */
void print_alphabet_x10(void)
{
	int x = 0;
	char n;

	while (x < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
			_putchar(n);
		_putchar('\n');
		x++;
	}
}
