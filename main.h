#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
* struct spe - nom de notre structure
* @chara: specifiers
* @f: fonction correspondante qui print selon un type
* Description : structure qui associe une fonction a un charactere
*/
typedef struct spe
{
char chara;
int (*f)(va_list args);
} specifiers;

int _printf(const char *format, ...);
int (*get_spe_func(char c))(va_list args);
int _putchar(va_list args);
int _printstr(va_list args);
void printchar(char c);
int _printmod(va_list args);
#endif
