#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - print name fxn, using pointer to function
 * @name: string to be added
 * @f: pointer to function itself
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

