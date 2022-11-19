#include "main.h"
/**
 * print_alphabet_10x - print 10x the alphabet in lowercase
 * followed by newline
 * Return: 0
*/
void print_alphabet_x10(void)
{
    int i;
    
    i = 0;
    while (i < 10)
    {
        char ch = 'a';
        while (ch <= 'z')
        {
            putchar(ch);
            ch++;
        }
        putchar('\n');
        i++;
    }
}
int main(void)
{
    print_alphabet_x10();
    return (0);
}