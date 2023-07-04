#include <string.h>
/**
 * _memset -fxn
 *@s:mem area
 *@b:constant byte
 *@n: first number of b bytes
 *Return: return char pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));

}

