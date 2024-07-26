#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

void printchar(char c)
{
    write(1, &c, 1);
}

/**
* _putchar - imitation putchar
* @args: argument a afficher
*/
int _putchar(va_list args)
{
    char s = (char) va_arg(args, int);
    write(1, &s, 1); /* affiche chaque cara */
    printchar('\0');
    return (1);
}
/**
* _printstr - affiche une chaine de charactere
* args: argument a afficher
*/

int _printstr(va_list args)
{
	char *s = (char *) va_arg(args, char *);
    int count = 0;

    if (s == (NULL))
    {
        return (0);
    }
    while (*s) /* parcours chaque cara*/
    {
        write(1, s, 1); /* affiche chaque cara */
        s++;
        count++;
    }
    printchar('\0');
    return (count);
}


void _printnum(va_list args)
{
    _putchar(args);
}

int _printmod(va_list args __attribute__((unused)))
{
    printchar('%');
    return (1);
}