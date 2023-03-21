#include "main.h"

/**
 *print_alphabet_x10 - void it print alphabet 10 times
 *
 *
 *
 *Return: no return type
 **/

void print_alphabet_x10(void)
{
	char alp;
	int line = 0;

		while (line < 10)
		{
			for (alp = 'a'; alp <= 'z'; alp++)
			{
				_putchar(alp);
			}
		_putchar('\n');
		line++;
		}
}
