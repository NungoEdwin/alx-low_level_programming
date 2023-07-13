#include <stdio.h>
#include <stdlib.h>
/**
 * main-fxn
 * * desc: program to multiply two positive numbers and print
 *
 * @argc: parameter argument count
 * @argv: parameter argument vector
 *
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int i, mult = 1;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mult *= atoi(argv[i]);
		}
			printf("%d\n", mult);
			return (0);

	}
}
