#include "main.h"
/**
 * _puts_recursion -fxn
 * @s: the string
 */
void _puts_recursion(char *s)
{
	_putchar(*s);

	if (*s != '\0')
		_puts_recursion(s + 1);
	_putchar('\n');
}
