#include "main.h"
/**
 * _isalpha - main fuction
 * @c: parameter to be printed
 *Return: return 1 if is lowercase and return 0 if otherwiswe
 */
int _isalpha(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
