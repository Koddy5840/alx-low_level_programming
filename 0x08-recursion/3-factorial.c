#include "main.h"
/**
 *factorial - this is the main function
 *@n: parameter of the fuction
 *Return: always 0
 */
int factorial(int n)
{
	if (n == 0)
	{
	return (0);
	}
	else if (n < 0)
	{
	return (-1);
	}
	else if (n == 1)
	{
	return (1);
	}
	else
	{
	return (n * factorial(n - 1));
	}
}
