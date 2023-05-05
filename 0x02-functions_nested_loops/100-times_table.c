#include "main.h"
#include <stdio.h>
/**
 *print_times_table(int n)
 *@n: parameter of the functiion
 *Retuen: Always 0
 */
void print_times_table(int n)
{
  int i; 
  int j;

  if (n > 0 && n < 16)
	{
	for (j= 0; j <= n; j++)
	{
	for (i = 0; i <= n; i++)
	{
		printf("%d", n);
		printf("%d", i * j);
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
	}
	}

}
