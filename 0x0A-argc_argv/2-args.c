#include <stdio.h>
#include <stdlib.h>
/**
 * main-fxn
 * * desc: program to add two positive numbers and print
 *
 * @argc: parameter argument count
 * @argv: parameter argument vector
 *
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
