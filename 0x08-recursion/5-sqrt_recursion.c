
#include "main.h"
/**
 * _sqrt_recursion - this is the main function
 * @n: parameter of the function
 *@a: iterator
 * Return: always 0
 */
int actual_sqrt_recursion(int n, int a);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - this is the main function
 * @n: parameter of the function
 * @a: iterator
 * Return: return 0
 */
int actual_sqrt_recursion(int n, int a)
{
	if (a * a > n)
		return (-1);
	if (a * a == n)
		return (a);
	return (actual_sqrt_recursion(n, a + 1));
}
