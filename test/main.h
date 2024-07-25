#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

typedef struct spe {
    char chara;
    void (*f)(va_list args);
} specifiers;

int _printf(const char *format, ...);
void (*get_spe_func(char c))(va_list args);
void _putchar(va_list args);
void _printstr(va_list args);
void printchar(char c);
void _printnum(va_list args);
#endif