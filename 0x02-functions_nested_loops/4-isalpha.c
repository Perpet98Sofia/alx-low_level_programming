#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * Description:checks fo alphabetic character in English alphabet
 * @c: The character to be tested
 * Return: 1 if the character is an alphabet
 * 0 if the character is not an alphabetic character
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
