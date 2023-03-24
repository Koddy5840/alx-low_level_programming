#include "main.h"
/**
 *_isupper - this is the main funcion
 *@c: parameter of the function
 *Return: 1 or 0
 */
int _isupper(int c)
{
	char i, k;

	for (i = 'A'; i <= 'Z'; i++)
	{
	if (c == i)
	{
		return (1);
	}
	}
	for (k = 'a'; k <= 'z'; i++)
	{
	if (c == k)
	{
		return (0);
	}
	}
	return (c);
}
