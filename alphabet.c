#include "main.h"
/**
 * print_alphabet - alphabet in lowercase
 * followed by new line
 * Return: 0
*/
void print_alphabet(void)
{
    char ch = 'a';
    while (ch <= 'z')
    {
        putchar(ch);
        ch++;
    }   
    putchar('\n');
}
int main(void)
{
    print_alphabet();
    return (0);
}