#include "main.h"
#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
    int i;
    va_list(args);
    va_start(args, format);

    for (i = 0; format[i] != '\0'; i++) /** boucle sur format*/
    {
        if (format[i] == '%' && format[i + 1] == 'd') /** test si la valeur est un %*/
        {
            _putchar(va_arg(args, char));
            i++;
        } else
        {
            _putchar(format[i]); /** affiche la valeur */
        }
        
    }
    return (0);
}