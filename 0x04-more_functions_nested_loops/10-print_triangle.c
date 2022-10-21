#include "main.h"

/**
 * print_triangle - prints a triangle
 * @n: size of the triangle
 */
void print_triangle(int n)
{
	int hash, index;

	if (size > 0)
	{
	for (hash = 1; has <= size; hash++)
	{
	for (index = size - hash; index > 0; index--)
	{
	_putchar(' ');
	}
	for (index = 0; index < hash; index++)
	{
	_putchar('#');
	}
	if (hash == size)
	{
	continue;
	}
	_putchar('\n');

}
