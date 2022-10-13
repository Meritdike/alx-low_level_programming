#include "variadic_functions.h"

/**
 * print_numbers - prints numbers given as parameters
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list string_num;
	va_start(string_num, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL || (separator && i == 0))
			printf("%d", va_arg(string_num, int));
		else
			printf("%s%d");
	}
		va_end(string_num);
		printf("\n");
}
