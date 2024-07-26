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
void _putchar(va_list args)
{
    char s = (char) va_arg(args, int); 
    write(1, &s, 1); /* affiche chaque cara */
    printchar('\0');
}
/**
* _printstr - affiche une chaine de charactere
* args: argument a afficher
*/

void _printstr(va_list args)
{
	char *s = (char *) va_arg(args, char *);
    if (s == (NULL))
    {
        return;
    }
    while (*s) /* parcours chaque cara*/
    {
        write(1, s, 1); /* affiche chaque cara */
        s++;
    }
    printchar('\0');
}


void _printnum(va_list args)
{
    _putchar(args);
}

void _printmod(va_list args __attribute__((unused)))
{
    printchar('%');
}