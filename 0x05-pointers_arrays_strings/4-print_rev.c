#include "main.h"
#include <string.h>
/**
 * print_rev - reverse fxn
 * @s:the string
 */
void print_rev(char *s)
{
	int z, i = 0;

	z = strlen(s);

	if (s[i] != '\0')
	{
	for (i = z; i >= 0; --i)
	{
		_putchar(s[i]);
	}
	}
	_putchar('\n');
}
