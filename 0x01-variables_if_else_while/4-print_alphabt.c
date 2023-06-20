#include<stdio.h>
/**
 * main-entry
 * Return:Always 0 (Success)
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a != 'e' && a != 'q')
			putchar(a);
		a++;
	}
	putchar('\n');
return (0);
}
