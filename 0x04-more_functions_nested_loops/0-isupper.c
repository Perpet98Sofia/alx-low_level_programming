#include "main.h"

/**
* _isupper - tests whether a character is an uppercase letter
*@c: the character to be used
* Return: 1 if it is a lowercase letter, 0 if it is not a lowercase
* letter.
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
