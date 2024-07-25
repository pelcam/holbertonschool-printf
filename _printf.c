#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	va_start(args, format);

	if (format == NULL) /* check si format est nul*/
	{
		return (-1);
	}
	
	for (i = 0; format[i] != '\0'; i++) /* parcours format*/
	{
		if (format[i] == '%') /* check si format est un mod*/
		{
			if (args == NULL)
			{
				printchar('O');
			}else
			{
				get_spe_func(format[i + 1])(args);
				i++;
			}
		} else
		{
			printchar(format[i]);
		}
	}

	va_end(args);
	return (0);
}