#include "main.h"

/**
 * _strlen_recursion - Returns to the length of a string.
 * @s: The string to be measured.
 * Return: on success 1.
 * On error, -1 is returned, error is set appropriately
 *
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
