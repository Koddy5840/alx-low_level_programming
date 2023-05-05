#include "main.h"
#include <stdio.h>
/**
 *times_table - this is the main function
 *void: parameter
 *Return: void
 */
void times_table(void)
{
	int i;
	int j;
	for( j= 0; j < 10; j++)
	{
	for( i = 0; i < 10; i++)
	{
	  printf("%d", i * j);
	  printf(",");
	  printf(" ");
	}
	}
	printf("\n");
}
