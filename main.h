#ifndef MAIN_H
#define MAIN_H

typedef struct caracter
{
	char *c;
	int (*f)(char);
} caracter_t;

int _printf(const char *format, ...);
int _putchar(char c);
int _printstr(char *s); 

#endif