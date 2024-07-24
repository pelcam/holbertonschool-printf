#include "main.h"
#include <unistd.h>
#include <stdarg.h>
/**
* _putchar - imitation putchar
* @args: argument a afficher
*/
void _putchar(va_list args)
{
    char c = (char) va_arg(args, int); 
    write(1, &c, 1);
    va_end(args);
}
/**
* _printstr - affiche une chaine de charactere
* args: argument a afficher
*/

void _printstr(va_list args)
{
	char *s = (char *) va_arg(args, char *); 
    write(1, s, 1);
    va_end(args);}