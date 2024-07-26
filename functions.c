#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
/*
* printchar - putchar
* fonction qui affiche un charactere
* @c: charactere a afficher
*/
void printchar(char c)
{
	write(1, &c, 1);
}

/**
* _putchar - imitation putchar
* @args: argument a afficher
* Return: 1
*/
int _putchar(va_list args)
{
	char s = (char) va_arg(args, int);

	printchar(s);/* affiche chaque cara */
	return (1);
}
/**
* _printstr - affiche une chaine de charactere
* @args: argument a afficher
* Return: nombre d'elements a afficher
*/

int _printstr(va_list args)
{
	char *s = (char *) va_arg(args, char *);
	int count = 0;

	if (s == (NULL))
	{
		printchar('(');
		printchar('n');
		printchar('u');
		printchar('l');
		printchar('l');
		printchar(')');
		return (6);
	}
	while (*s) /* parcours chaque cara*/
	{
		printchar(*s); /* affiche chaque cara */
		s++;
		count++;
	}
	return (count);
}

/**
 * _printnum - Affiche un nombre entier
 * @args: La liste d'arguments variadiques contenant l'entier à afficher.
 *
 * Cette fonction récupère un entier depuis la liste d'arguments,
 * le convertit en chaîne de caractères et l'affiche caractère par
 * caractère en utilisant une fonction d'affichage de caractère(par exemple,
 * `putchar`). La fonction gère également les nombres négatifs en affichant
 * le signe moins avant les chiffres.
 *
 * Return: Le nombre total de caractères affichés.
 */

int _printnum(va_list args)
{
	int n = va_arg(args, int);
	int d = 1, len = 0;
	unsigned int num;

	if (n < 0)
	{
		printchar('-');
		len++;
		num = -n;
	}
	else
	{
		num = n;
	}

	while (num / d >= 10)
		d *= 10;

	while (d > 0)
	{
		printchar('0' + num / d);
		len++;
		num %= d;
		d /= 10;
	}
	return (len);
}

/**
 * _printmod - Affiche un caractère de pourcentage (%)
 * @args: Paramètre non utilisé.
 *
 * Cette fonction affiche un caractère de pourcentage '%'.
 * Le paramètre @args est fourni pour correspondre à la signature
 * de la fonction, mais il n'est pas utilisé dans cette fonction spécifique.
 *
 * Return: 1,(le caractère '%').
 */
int _printmod(va_list args __attribute__((unused)))
{
	printchar('%');
	return (1);
}
