#include "main.h"

/**
 * _isdigit -checks for a digit (0 through 9).
 * @c - is the character for the digit
 * Return 1 if c is a digit otherwise print 0
 */

int _isdigit(int c);
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);

}