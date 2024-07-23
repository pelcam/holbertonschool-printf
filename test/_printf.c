#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <string.h>

void printchar(char c)
{
	write(1, &c, 1);
}


int _printf(const char *format, ...)
{
    int i = 0, j = 0;
    specifiers modulo[] ={
        {"c", _putchar},
        {"s", _printstr},
        {NULL, NULL}
    };
    va_list(args);
    va_start(args, format);

    for (i = 0; format[i] != '\0' ; i++) /** boucle sur format*/
    {
        if (format[i] == '%' && format[i + 1] == modulo[j].chara[0]) /** test si la valeur est un %*/
        {
            modulo[j].f(args);
            i++;
        } else
        {
            printchar(format[i]); /** affiche la valeur */
        }
        j++;
    }
    va_end(args);
    return (0);
}