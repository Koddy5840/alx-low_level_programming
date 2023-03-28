#include "main.h"
#include <stdio.h>
/**
 *print_array - this is the main function
 *@a: parameter 1 of the function
 *@n: parameter 2 of the function
 *Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n-1); i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n-1))
	{
		printf("%d", a[n-1]);
	}
	printf("\n");
	
}
