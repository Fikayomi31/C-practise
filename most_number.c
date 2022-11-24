#include "main.h"
/**
 * print_most_numbers - print the number from 0 - 9 
 * don't print 2 & 4
 * 
 * Return: 0
*/
void print_most_numbers(void)
{
    int num = 48;
    while (num < 58)
    {
        if (num != 50 && num != 52)
            putchar(num);
        num++;
    }
    putchar('\n');
}
int main(void)
{
    print_most_numbers();
    return (0);
}