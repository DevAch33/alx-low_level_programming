#include <stdio.h>

/*
* main - Entry point
* Return: Always 0 (Success)
*/

int main(void)
{
	int a;
	float b;
	long int c;
	char d;
	long long int e;
	printf("Size of a char:%u byte(s)\n", sizeof(d));
	printf("Size of an int: %u byte(s)\n", sizeof(a));
	printf("Size of a long int: %u byte(s)\n", sizeof(c));
	printf("Size of a long long int: %u byte(s)\n", sizeof(e));
	printf("Size of a float: %u byte(s)\n", sizeof(b));
	return (0);
}
