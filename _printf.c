#include "main.h"
#include <unistd.h>

/**
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 */
int _printstr(char *s)
{
	return(write(1, s, sizeof(s) - 1));
}

/**
 */
caracter_t spe[] = {
    {"c", _putchar},
    {"s", _printstr},
    {NULL, NULL}
};

/**
 */
int _printf(const char *format, ...)
{
    int i;

    for (i = 0; format[i] != '\0'; i++)
    {
        if (format[i] == "%")
        {
            if (format[i + 1] == 'c')
            {
            }
            if (format[i + 1] == 's')
            {
            }
        }
        _putchar(format[i]);
    }
}