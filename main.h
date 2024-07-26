#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

/**
* struct spe - nom de notre structure
* @chara: specifiers
* @f: fonction correspondante qui print selon un type
* Description : structure qui associe une fonction a un charactere
*/
typedef struct spe
{
char chara;
void (*f)(va_list args);
} specifiers;

int _printf(const char *format, ...);
void (*get_spe_func(char c))(va_list args);
void _putchar(va_list args);
void _printstr(va_list args);
void printchar(char c);
void _printnum(va_list args);
void _printmod(va_list args);
#endif
