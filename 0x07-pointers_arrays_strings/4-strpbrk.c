#include <string.h>
/**
 * _strpbrk -fxn
 * @s:string to be searched
 * @accept:char looked for in prefix bytes
 * Return:pointer of s or Null
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
