#include "main.h"
#include <stdio.h>
/**
 *print_chessboard - this is the main function
 *@a: parameter of the function
 *Return: void
 */
void print_chessboard(char (*a)[8])
{
	int x,y;
	
	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		{
			printf("%d",a[x][y]);
		}
		printf("\n");
	}
}
