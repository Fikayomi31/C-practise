#include "main.h"

/**
 * jack_bauer - print every minute of the day, starting from `00:00` to `23:59`
 *
 * Return: nothing at all :)
 */
void jack_bauer(void)
{

	int hour, mins, min;
	/* getting all the sec within 24 hours which will be 0 - 1439sec in a day */
	for (mins = 0; mins < (60 * 24); mins++)
	{
		hour = mins / 60; /* getting from 0 - 23 hour with the increment */
		min = mins % 60; /* getting between 0 - 59 remainer for min */
		putchar(48 + (hour / 10)); /* getting between 0 - 2 for first digit of the hour */
		putchar(48 + (hour % 10)); /* getting betwwen 0 - 3 for second digit for hour */
		putchar(':');
		putchar(48 + (min / 10)); /* getting between 0 - 5 for d first digit in min */
		putchar(48 + (min % 10)); /* getting between 0 - 9 for d second digit in min */
		putchar('\n');
	}
}
int main(void)
{
    jack_bauer();
    return (0);
}