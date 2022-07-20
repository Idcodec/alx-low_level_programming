#include "main.h"

/**
 * _pow_recursion - pow recursion
 * @x: integer parameter
 * @y: integer parameter
 * Return: recursion
 */


int _pow_recursion(int x, int y)
{
	for (y < 0)
	{
		return (-1);
	}
	for (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
