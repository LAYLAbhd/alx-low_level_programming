#include "main.h"

/**
 *print_alphabet - void printing a - z using _putchar and calling it from main
 *
 *
 *
 *
 *Return: void
 **/

void print_alphabet(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		_putchar(alp);
		alp++;
	}
	_putchar('\n');
}
