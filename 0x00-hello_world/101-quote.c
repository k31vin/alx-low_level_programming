/*
 * File: 101-quote.c
 * Auth: Christopher K. Oyier
 * Desc: A program that prints "and that piece of art is useful"
 * - Dora Korpar, 2015-10-19,
 *       followed by a new line, to the standard error.
 */

#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
/* Prints the text to the standard error */
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}

