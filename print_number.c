#include "main.h"
/**
 * print_number - prints number from 0 - 9 followed by
 * a new line
 * 
 * Return: 0
*/
void print_numbers(void)
{
    int num = 48;
    while (num < 58)
    {
        putchar(num);
        num++;
    }         

    putchar('\n');
}
int main(void)
{
    print_numbers();
    return (0);
}