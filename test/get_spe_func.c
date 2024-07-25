#include "main.h"
#include <stddef.h>

void (*get_spe_func(char c))(va_list args)
{
    specifiers chars[] = {
        {'c', _putchar},
        {'s', _printstr},
        {'i', _printnum},
        {'d', _printnum},
        {'%', _printmod},
        {'\0', NULL} /* Marqueur de fin */
    };
    int i = 0;

    while (chars[i].chara != '\0') /* parcours la structure*/
    {
        if (chars[i].chara == c) /* check si l'arg suivant est c ou s */
        {
            return (chars[i].f);
        }
        i++;
    }
    return (NULL);
}
