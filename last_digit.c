#include "main.h"
/**
 * print_last_digit - print last digit of a number
 * @n: the number
 * Return: value of the last number
*/
int print_last_digit(int n)
{
    int k = abs(n) % 10;
        putchar(48 + k);

    return (k);

}
int main(void)
{
    int r;

    print_last_digit(98);
    print_last_digit(0);
    r = print_last_digit(-1024);
    putchar('0' + r);
    putchar('\n');
    return (0);
}