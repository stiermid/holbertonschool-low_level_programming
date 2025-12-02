#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: void
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			/* Print hour */
			if (h < 10)
			{
				_putchar('0');
			}
			else
			{
				if (h < 20)
					_putchar('1');
				else
					_putchar('2');
			}
			_putchar(h % 10 + '0');

			/* Semicolon */
			_putchar(':');

			/* Print minute */
			if (m < 10)
			{
				_putchar('0');
			}
			else
			{
			_putchar(m / 10 + '0');
			}

			_putchar(m % 10 + '0');
			_putchar('\n');
		}
	}
}

