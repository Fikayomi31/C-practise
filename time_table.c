#include "main.h"
/**
 * time_table - print the 9 times table
 * 
 * Return: 0
*/
void times_table(void)
{
    int t = 9, r, c, m;
    /* r for the row */
    for (r = 0; r <= t; r++)
    {
        /* c for the colume */
        for (c = 0; c <= t; c++)
        {
            /* multiple the row by the colume */
            m = r * c;
            /* if the first digit exits */
            if (m / 10)
                /* print the first digit */
                putchar(48 + (m / 10));
            
            /* if only a single digit exits */
            else if (c != 0)
            /* print a space */
            putchar(' ');
            /* print the second digit */
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