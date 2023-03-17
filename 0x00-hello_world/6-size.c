#include <stdio.h>

/**
 * main - this is the main function
 *
 * Return: always 0
 */

int main(void)
{
	char v = 'b';
	int x = 7;
	long int b = 400;
	long long int a = 44005955;
	float f = 4.5667;

	printf("Size of a char: %c byte(s).\n", sizeof(char));
	printf("Size of a int: %d byte(s).\n", sizeof(int));
	printf("Size of a long int: %li byte(s).\n", sizeof(long int));
	printf("Size of a long long int: %lld byte(s).\n", sizeof(long long int));
	printf("Size of a float: %f byte(s).\n", sizeof(float));
	return (0);
}
