#include "main.h"

/**
 * _abs - outputs absolut value of integer input
 * @n: integer to compute
 *
 * Return: n
 */


int _abs(int n)
{
if (n >= 0)
return (n);

else
{
n *= -1;
return (n);
}
}
