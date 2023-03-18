#include <stdio.h>

/**
*main - This is the main function
*Description: A program that prints single digits
*Return: Always 0 (success)
*
*/
int main(void)
{

	for (int i = 0; i <= 9; i++)
	{
	putchar(i + 48);
	}
	putchar('\n');
	return (0);
}
