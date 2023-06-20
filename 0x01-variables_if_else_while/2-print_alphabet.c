#include<stdio.h>
/**
*main-prints alphabets in lower case adding newline after
*
*Return: Always 0 (Success)
*/
int main(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
{
	putchar(a);
	putchar('\n');
}
return (0);
}
