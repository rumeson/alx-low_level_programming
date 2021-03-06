#include "main.h"

/**
* _pow_recursion - return value of x raised
* to power of y
* @x: first integer
* @y: second integer
*
* Return: power
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	else
		return (x * _pow_recursion(x, y - 1));
}
