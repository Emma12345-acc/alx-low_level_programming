#include "main.h"
/**
 * Prints numbers from 0 to 9
 *
 * Followed by a new line
 *
 */
void print_numbers(void)
{
 int c;

 for (c = 48; c < 58; c++){
 	_putchar(c);
 }
 _putchar('\n');
}
