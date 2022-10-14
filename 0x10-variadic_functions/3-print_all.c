#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *string, *separator = ", ";
	va_list listings;

	va_start(listings, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(listings, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(listings, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(listings, double));
				break;
			case 's':
				string = va_arg(listings, char *);
				if (string == NULL)
					string = "(nil)";
				printf("%s%s", separator, string);
				break;
		}
			i++;
	}
		printf("\n");
		va_end(listings);
}
