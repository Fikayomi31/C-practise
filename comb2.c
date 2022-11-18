#include "main.h"
/**
 * main - possible combination of three digit
 * with coma and space
 * Return: 0
*/
int main(void)
{
    int i, j;
    i = 48;
    while (i < 58) /* first digit */
    {
        j = i + 1;
        while (j < 58) /* second digit */
        {
            if (i < j || i != j)
            {
                putchar(i);
                putchar(j);
                if (i < 56 || j < 57)
                putchar(',');
                putchar(' ');
            }
            j++;
        }
        i++;
    }
}