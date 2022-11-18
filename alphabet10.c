#include "main.h"
/**
 * print_alphabet_10x - print 10x the alphabet in lowercase
 * followed by newline
 * Return: 0
*/
void print_alphabet_x10(void)
{
    char ch = 'a';
    int i = 0;
    while (i <= 10)
    {
        while (ch <= 'z')
        {
            putchar(ch);
             ch++;
        }
       
    }

}