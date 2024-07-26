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
	int count = 0;

	va_start(args, format);
	if (format == NULL) /* check si format est nul*/
	{
		return (-1);
	}

	while (*format)
	{
        if (*format == '%' && *(format + 1) != '\0')
		{
            int (*spe_func)(va_list) = get_spe_func(*(format + 1));

            if (spe_func != NULL)
			{
                count += spe_func(args);
                format++;
            } else
			{
                printchar(*format);
                count++;
            }
        } else
		{
            printchar(*format);
            count++;
        }
        format++;
    }
	va_end(args);
	return (count);
}
