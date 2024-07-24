#include "main.h"
#include <stddef.h>

char (*get_spe_func(const char *format, ...))
{
specifiers chars[] = {
    {'c', _putchar},
    {'s', _printstr},
    {'\0', NULL} /* Marqueur de fin */
};
int i = 0, j = 0;

    for (j = 0; format[j] != '\0'; j++)
    {
        if (format[j] == '%')
        {
            while (chars[i].chara != '\0' && chars[i].chara != format[j + 1])
                i++;
        }
    }
	return (chars[i].f);

}
