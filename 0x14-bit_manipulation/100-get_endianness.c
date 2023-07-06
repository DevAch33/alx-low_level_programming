#include "main.h"
#include <stdio.h>

/**
*
* Checks if the system is big endian or little endian
*
* Always return: 0 if big endian, 1 if little endian
*
**/

int get_endianness(void)

{
	int N;
	char *A;

	N = 2;
	A = (char *)&N;
	if (*A)
		return (1);
	return (0);
}
