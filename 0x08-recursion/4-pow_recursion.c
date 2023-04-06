#include "main.h"
/**
 * _pow_recursion - function returns the value of x raised to the power of y
 * Description: 'task 4'.
 *
 * @x: integer
 * @y: integer
 * Return: _pow_recursion function
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 0)
return (1);
else if (x == 0)
return (0);
else
return (x * _pow_recursion(x, y - 1));
}
