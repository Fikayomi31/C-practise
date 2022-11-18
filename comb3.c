#include "main.h"
/**
 * main - two combination of digit
 * 
 * Return: 0
*/
int main(void)
{
    int x, y, z;
    x = 48;
    while (x < 58)
    {
        y = x + 1;
        while (y < 58)
        {
            z = y + 1;
            while (z < 58)
            {

            
                if (x < y || y < z)
                {
                    putchar(x);
                    putchar(y);
                    putchar(z);
                    if (x < 55 || y < 56 || z < 57)
                    putchar(',');
                    putchar(' ');
                }
                z++;
            }
            y++;
        }
        x++;
    }
    putchar('\n');
    return 0;
} 