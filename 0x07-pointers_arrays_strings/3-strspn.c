#include <string.h>
/**
 * _strspn -fxn
 * @s:string to be searched
 * @accept:char looked for in prefix bytes
 * Return:unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{

	return (strspn(s, accept));

}
