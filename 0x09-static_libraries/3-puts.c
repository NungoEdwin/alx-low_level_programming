#include "main.h"
#include <string.h>

/**
 * _puts -fxn
 * @s:char
 */
void _puts(char *s)
{
	int i, strl;

	strl = strlen(s);

	for (i = 0 ; i < strl; i++)
		_putchar(s[i]);
}
