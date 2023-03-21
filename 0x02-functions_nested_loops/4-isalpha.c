#include "main.h"
/**
 * _isalpha - main fuction
 * @c: parameter to be printed
 *Return: return 1 if is lowercase and return 0 if otherwiswe
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
