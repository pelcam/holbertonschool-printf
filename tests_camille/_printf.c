#include "main.h"

/* Table des gestionnaires de format */
format_handler_t handlers[] = {
    {'c', handle_char},
    {'s', handle_string},
    {'%', handle_percent},
    {'\0', NULL} /* Marqueur de fin */
};

/**
 * get_handler - Retourne le gestionnaire de format pour un spécificateur donné
 * @specifier: Le spécificateur de format
 * Return: Pointeur vers la fonction de gestion correspondante ou NULL
 */
int (*get_handler(char specifier))(va_list)
{
    int i;
    for (i = 0; handlers[i].specifier != '\0'; i++)
    {
        if (handlers[i].specifier == specifier)
            return (handlers[i].handler);
    }
    return (NULL);
}

/**
 * _printf - produit une sortie selon un format
 * @format: chaîne de format contenant les caractères et les spécificateurs
 * Return: le nombre de caractères imprimés
 */
int _printf(const char *format, ...)
{
    va_list args;
    int printed_chars = 0;
    int (*handler)(va_list);
    int i;

    if (!format)
        return (-1);

    va_start(args, format);

    for (i = 0; format[i] != '\0'; i++)
    {
        if (format[i] == '%' && format[i + 1] != '\0')
        {
            handler = get_handler(format[++i]);
            if (handler)
                printed_chars += handler(args);
            else
            {
                printed_chars += _putchar('%');
                printed_chars += _putchar(format[i]);
            }
        }
        else
        {
            printed_chars += _putchar(format[i]);
        }
    }

    va_end(args);
    return (printed_chars);
}
