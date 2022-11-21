#include "main.h"
/**
 * main - entry point
 * 
 * Return: 0
*/
int main(void)
{
    int i;
    i = 0;
    while (i <= 1000)
    {
        printf("%d", i);
        putchar(',');
        putchar(' ');
        i++;
    }
    printf("\n");
}