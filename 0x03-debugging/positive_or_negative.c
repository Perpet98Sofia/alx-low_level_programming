#include "main.h"

/**
 * positive_or_negative - entry point
 * Description - checks whether an integer is positive or negative
 * Return: always 0 (success)
 */
void positive_or_negative(int i)
{
if (i < 0)
{
printf("%d is negative\n", i);
}
 else if (i > 0)
{
printf("%d is positive\n", i);
}
 else
{
printf("%d is zero\n", i);
}
return;
}
