#include "main.h"
#include <string.h>
/**
 * puts_half -hdhdhd
 * @str:string input
 */
void puts_half(char *str)
{
	int l, n, i;

	l = strlen(str);
	if ((l % 2) != 0)
	{
		n = (l - 1) / 2;
		for (i = n; i < l; i++)
			_putchar(str[i]);
	}
	else if ((l % 2) == 0)
	{
		n = l / 2;
		for (i = n; i < l; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}


