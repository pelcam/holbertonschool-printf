#include "main.h"
/**
* _putchar - imitation putchar
* @args: argument a afficher
*/
void _putchar(va_list args)
{
	write(1, va_list args, 1);
}
/**
* _printstr - affiche une chaine de charactere
* args: argument a afficher*/

void _printstr(va_list args)
{
	write(1, va_list args, sizeof(va_list args) - 1);
}