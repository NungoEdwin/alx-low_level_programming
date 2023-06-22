#include<stdio.h>
/**
 * _islower - func det if letter is lowercase
 *@c: char to be evaluated
 * Return: return 1 in success and 0 in otherwise
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
