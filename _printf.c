#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
* _printf - fonction identique a la commande printf
*
* @format: chaine fixe a afficher
*
* Return: nombre de charactere copier
*/
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;

	va_start(args, format);
	if (format == NULL) /* check si format est nul*/
	{
		return (-1);
	}

	while (*format) /* parcours format*/
	{
		if (format[i] == '%' && format[i + 1] != '\0') /* check si format est un %*/
		{
			get_spe_func(format[i + 1])(args);
		} else
		{
			printchar(format[i]);
		}
		format++;
	}

	va_end(args);
	return (0);
}
