#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion -fxn
 * @s: the string
 */
void _print_rev_recursion(char *s)
{
       char *p;
	p = (strchr(s, *s == '\0'));       

	if (s < p)
	{
		p--;
		_putchar(*p);
	
		_print_rev_recursion(p);
	}
        _putchar('\n');
}
