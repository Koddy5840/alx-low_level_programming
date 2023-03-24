#include "main.h"
/**
 * _isdigit - this is the main function
 *@c: parameter of the function
 *Return: return c
 */
int _isdigit(int c)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
	if (c == i && i == c )
	{
		return (1);
	}
	else if (c != i)
	{
		return (0);
	}
	}
	return (c);
}
