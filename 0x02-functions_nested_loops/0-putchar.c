#ifndef _PUTCHAR_C_
#define _PUTCHAR_C_

#include "main.h"

/**
 * _putchar - prints a character to stdout
 * @c: the character to print
 *
 * Return: 1 on success, -1 on error.
 */
int _putchar(char c)
{
  return (write(1, &c, 1));
}

#endif /* _PUTCHAR_C_ */

