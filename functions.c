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
    printchar(s); /* affiche chaque cara */
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
        printchar('(');
        printchar('n');
        printchar('u');
        printchar('l');
        printchar('l');
        printchar(')');
        return (6);
    }
    while (*s) /* parcours chaque cara*/
    {
        printchar(*s); /* affiche chaque cara */
        s++;
        count++;
    }
    return (count);
}


int _printnum(va_list args)
{
    int n = va_arg(args, int);
    int d = 1, len = 0;
    unsigned int num;

    if (n < 0)
    {
        printchar('-');
        len++;
        num = -n;
    }
    else
    {
        num = n;
    }

    while (num / d >= 10)
        d *= 10;

    while (d > 0)
    {
        printchar('0' + num / d);
        len++;
        num %= d;
        d /= 10;
    }

    return len;
}

int _printmod(va_list args __attribute__((unused)))
{
    printchar('%');
    return (1);
}