#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Entry point
 * function that returns sum of all it's parameters
 * @n: number of parameters
 * Return: on Success - sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i;
	va_list arguments;

	va_start(arguments, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arguments, unsigned int);
	}
	return (sum);
}
