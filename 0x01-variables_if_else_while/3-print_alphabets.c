#include<stdio.h>
/**
 * main-writing alphabets starting with small the big consec
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
		for (a = 'a'; a <= 'z'; a++)
		{
			putchar(a);
		}
		for (a = 'A'; a <= 'Z'; a++)
		{
		putchar(a);
		}
		putchar('\n');
return (0);
}
