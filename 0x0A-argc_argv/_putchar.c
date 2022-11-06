#include <unistd>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}