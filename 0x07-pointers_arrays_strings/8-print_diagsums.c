#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - this is the main function
 *@a: this is the parameter of the function
 *@size: second parameter of the function
 *Return: void
 */
void print_diagsums(int *a, int size)
{
	int side1 = 0;
	int side2 = 0;
	int x;

	for (x = 0; x < size; x++)
	{
		side1 = side1 + a[x * size + x];
	}
	for (x = size - 1; x >= 0; x--)
	{
		side2 += a[x * size + (size - x - 1)];
	}
	printf("%d, %d", side1, side2);
	printf("\n");
}
