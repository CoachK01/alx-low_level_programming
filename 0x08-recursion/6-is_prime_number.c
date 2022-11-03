#include "main.h"

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * is _divisible - checks if integer is divisible
 * @num: The number to be checked
 * @div: The divisor
 *
 * Return: If number is divisible - 0
 * If number is not divisible - 1.
 */
int is_divisible(int num, int div);

	if (num % div == 0)
		return (0);
