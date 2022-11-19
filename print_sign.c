#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: the number
 * Return: 0 if it 0 1 if it + and -1 if it - 
*/
int print_sign(int n)
{
    if (n > 0)
    {
        putchar('+');
        return (1);
    }
    else if (n == 0)
    {
        putchar('0');
        return (0);
    }
    else if (n < 0)
    {
        putchar('-');
        return (-1);
    }
}

int main(void)
{
    int r;

    r = print_sign(98);
    putchar(',');
    putchar(' ');
    putchar(r + '0');
    putchar('\n');
    r = print_sign(0);
    putchar(',');
    putchar(' ');
    putchar(r + '0');
    putchar('\n');
    r = print_sign(0xff);
    putchar(',');
    putchar(' ');
    putchar(r + '0');
    putchar('\n');
    r = print_sign(-1);
    putchar(',');
    putchar(' ');
    putchar(r + '0');
    putchar('\n');
    return (0);
}
