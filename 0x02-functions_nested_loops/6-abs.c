#include "main.h"
/**
 *_abs - this is the main function
 *@i: parameter of the function
 *Return: returns parameter
 */
int _abs(int i)
{

	if (i < 0)
	{
		i = -(i);
	}
	else if  (i >= 0)
	{
		i = i;
	}
	return (i);
}
