#include "main.h"
#include <stddef.h>
/**
* get_spe_func - pointeur de fonction
*
* fonction qui récupere une autre fonction selon le charactere en arguments
*
* @c: argument a check dans la structure
*
* Return: soit la fonction correspondante soit void
*/
void (*get_spe_func(char c))(va_list args)
{
	specifiers chars[] = {
		{'c', _putchar},
		{'s', _printstr},
		{'i', _printnum},
		{'d', _printnum},
		{'%', _printmod},
		{'\0', NULL} /* Marqueur de fin */
	};
	int i = 0;

	while (chars[i].chara != '\0') /* parcours la structure*/
	{
		if (chars[i].chara == c) /* check si l'arg est identique a c*/
		{
			return (chars[i].f);
			}
		i++;
	}
	return (NULL);
}
