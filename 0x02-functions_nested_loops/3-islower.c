#include "main.h"
/**
 * _islower - main fuction
 * @c: parameter to be printed
 *Return: return 1 if is lowercase and return 0 if otherwiswe
 */
int _islower(int c)
{
	if (c > 97 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
