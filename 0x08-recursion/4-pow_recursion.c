#include "main.h"
/**
 * _pow_recursion - this is the main function
 *@x: first parameter of the function
 *@y: second parameter of the function
 *Return: Always 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	return (-1);
	}
	else if (y == 0)
	{
	return (1);
	}
	else
	{
	return (x *  _pow_recursion(x, y - 1));
	}
}
