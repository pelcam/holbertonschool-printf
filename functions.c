#include "main.h"

/*
*putchar - print a char
*@c: char to print
*/
int _putchar(char c)
{
    return (write (1, &c, 1));
}

/*
*_printstr - print a string
*@s: pointer to the start of the string to print
*/
int _printstr(char *s)
{
    return (write(1, s, sizeof(s) + 1))
}