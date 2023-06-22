#include "main.h"
/**
 *print_last_digit - fxn gettin abs value
 * @n: param
 * Return: return always int
 */
int print_last_digit(int n)
{
int l;

if (n >= 0)
{
l = n % 10;
}
else
{
l = n % 10;
l *= -1;
}
_putchar('0' + l);
return (l);
}
