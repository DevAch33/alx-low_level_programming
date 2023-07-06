#include <stdio.h>
#include "main.h"

/**
* main - check the code
*
* Return: Always 0.
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int btu;
	int len, base;

	if (!b)
		return (0);
	btu = 0;

	for (len = 0; b[len] != '\0' ; len++)
		;
	for (len--, base = 1; len >= 0; len--, base *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
		if (b[len] & 1)
		{
			btu += base;
		}
	}
	return (btu);

}
