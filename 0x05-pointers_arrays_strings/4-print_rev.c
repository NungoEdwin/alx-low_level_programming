#include "main.h"
#include <string.h>
/**
 * print_rev - reverse fxn
 * @s:the string
 */
void print_rev(char *s)
{
	int z, i;

	z = strlen(s);

	for (i = z; i >= 0; --i)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
