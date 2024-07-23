#include "main.h"

/**
 * handle_char - Imprime un caractère
 * @args: Liste d'arguments
 * Return: Nombre de caractères imprimés
 */
int handle_char(va_list args)
{
    char c = va_arg(args, int);
    return (_putchar(c));
}

/**
 * handle_string - Imprime une chaîne
 * @args: Liste d'arguments
 * Return: Nombre de caractères imprimés
 */
int handle_string(va_list args)
{
    char *str = va_arg(args, char *);
    int len = 0;

    if (!str)
        str = "(null)";

    while (str[len] != '\0')
        _putchar(str[len++]);

    return (len);
}

/**
 * handle_percent - Imprime un symbole pourcent
 * @args: Liste d'arguments (inutilisé)
 * Return: Nombre de caractères imprimés
 */
int handle_percent(va_list args)
{
    (void)args;
    return (_putchar('%'));
}
