#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: separator between strings
 * @n: number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;
	va_list strings;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		if (string == NULL)
		{
			string = "(nil)";
		}
		else if (separator == NULL || (separator && i == 0))
			printf("%s", string);
		else
			printf("%s%s", separator, string);
	}
		printf("\n");
		va_end(strings);
}
