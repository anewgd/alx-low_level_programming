#ifndef MAIN
#define MAIN

#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);
/**
 * print_alphabet - prints the alphabets
 *
 * Return: void
 */
void print_alphabet(void);
/*
 *  {
 *	int i;
 *       for (i = 'a'; i <= 'z'; i++)
 *		_putchar(i);
 *
 *	_putchar('\n');
 *
 *	return;
}
 */
#endif
