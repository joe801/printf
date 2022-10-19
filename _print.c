#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _printf - produces output according to format
 *
 * @format: pointer to string
 *
 * Return: no of characters printed
 */

int _printf(const char *format, ...)
{
	int i = 0;
	char* s;
	char c;
	va_list args;

	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					c = va_arg(args, int);
					_putchar(c);
					break;
				case 's':
					s = va_arg(args, char*);
					while (*s != '\0')
						_putchar(*s++);
					break;
				case '%':
					_putchar(37);
					break;
			}
		}
		else
			_putchar(format[i]);
		i++;
	}
	va_end(args);
	return (i);

}
