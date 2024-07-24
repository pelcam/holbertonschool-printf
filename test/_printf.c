#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
void printchar(char c)
{
	write(1, &c, 1);
}

int _printf(const char *format, ...)
{

	if (format == NULL)
	{
		return (NULL);
		exit(100);
	}
	
	for (i = 0; format[i] != '\0' ; i++) /** boucle sur format*/
	{
		if (format[i] == '%' && format[i + 1] == modulo[i].chara) /* test si la valeur est un % et la valeur d'après un s*/
		{
			_printstr(args); /* affiche un argument*/
			i++;
		} else if (format[i] == '%' && format[i + 1] == 'c') /* test si la valeur est un % et la valeur d'après un c*/
		{
			_putchar(args); /* affiche un argument*/
			i++;
		} else
		{
			printchar(format[i]); /* affiche la valeur */
		}
	}
	va_end(args);
	return (0);
}
