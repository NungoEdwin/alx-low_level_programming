#include "main.h"
/**
 * _print_rev_recursion -fxn
 * @s: the string
 */
void _print_rev_recursion(char *s)
{
        if (*s == '\0')
	{
		_putchar(*(s - 1));
	}
	_print_rev_recursion(s + 1);
        _putchar('\n');
}
