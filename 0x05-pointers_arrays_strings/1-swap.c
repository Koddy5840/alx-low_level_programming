#include "main.h"
/**
 *swap_int- this is the main function
 *@a: parameter 1
 *@b: parameter 2
 *Return: void
 */
void swap_int(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
