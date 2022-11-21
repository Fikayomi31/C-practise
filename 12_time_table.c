#include "main.h"
/**
 * times_table - prints the 12 time table starting with 1
 * 
 * Return: 0
*/
void times_table(void)
{
    int t = 12; /* number of time */
    int r; /* for rows*/
    int c; /* for colume */
    int m; /* getting the multiple */

    for (r = 0; r <= 12; r++)
    {
        for (c = 0; c <=12; c++)
        {
            /* multiply the row with the colume */
            m = r * c;

            if (m / 10) /* if first digit exit */
                putchar(48 + m / 10);

            else if (c != 0) /* if a single digit exit */
                /* print space */

                putchar(' ');

            putchar(48 + (m % 10));

            if (c != t)
            {
                putchar(',');
                putchar(' ');
            }
        }
        putchar('\n');
    }
}
int main(void)
{
    times_table();
    return (0);
}
