#include <string.h>
/**
 * _strstr -fxn
 * @haystack:string to be searched
 * @needle:string looked for in haystack
 * Return:char
 */
char *_strstr(char *haystack, char *needle)
{
	char *a;

	a = strstr(haystack, needle);
	
	return (a);

}
