#include "main.h"

/**
 * _abs - prints the absolute value of an integer
 * @t: The integer to compute its absolute value
 * Return: returns the absolute value
 *
 */
int _abs(int a)
{
	int k = a;
	int absvalue;

	if (k < 0)
	{
		k = k * (-1);
	}
	absvalue = k;
	return (absvalue);
}
