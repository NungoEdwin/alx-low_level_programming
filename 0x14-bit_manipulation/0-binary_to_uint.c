#include "main.h"
/**
 * binary_to_uint - converts binary no to unsigned int
 * @b: string containing the binary number
 * Return:the converted no. to int unsigned
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int deciVal = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		deciVal = 2 * deciVal + (b[i] - '0');
	}
	return (deciVal);
}

