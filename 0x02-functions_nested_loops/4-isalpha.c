#include<stdio.h>
/**
 * _isalpha - func det if letter is lowercase
 *@c: char to be evaluated
 * Return: return 1 in success and 0 in otherwise
 */
int _isalpha(int c)
{

if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	return (1);
else
	return (0);
}
