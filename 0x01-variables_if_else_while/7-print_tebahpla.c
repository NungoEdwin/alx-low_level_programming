#include<stdio.h>
/**
*main-prints alphabets in lower case adding newline after
*
*Return: Always 0 (Success)
*/
int main(void)
{
char a;
for (a = 'z'; a >= 'a'; a--)
{
        putchar(a);
}
putchar('\n');
return (0);
}
