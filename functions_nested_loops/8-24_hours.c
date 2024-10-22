#include "main.h"

/**
 * jack_bauer - prints every minute of the day from 00:00 to 23:59
 *
 * This function loops through each hour and minute of the day,
 * printing the time in the format HH:MM.
 */
void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar((hour / 10) + '0');  /* Print the tens place of hour */
			_putchar((hour % 10) + '0');  /* Print the units place of hour */
			_putchar(':');                 /* Print the colon */
			_putchar((minute / 10) + '0'); /* Print the tens place of minute */
			_putchar((minute % 10) + '0'); /* Print the units place of minute */
			_putchar('\n');                /* New line */
		}
	}
}

