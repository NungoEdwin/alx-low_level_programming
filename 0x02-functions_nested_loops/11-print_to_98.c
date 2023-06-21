include "main.h"

/**
 * main - outputing numbers upto 98
 * print_to_98 - printing
 *
 * Return: Always 0.
 */
void print_to_98(int n);

int main(void)
{
	print_to_98(0);
	print_to_98(98);
	print_to_98(111);
	print_to_98(81);
	print_to_98(-10);
return (0);
}
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n; n <= 98; n++)
			_putchar(n);
			_putchar(',');
			_putchar(' ');
	}
	else
	{
		for (n; n >= 98; n--)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
		}
	}
_putchar('\n');
return;
}
