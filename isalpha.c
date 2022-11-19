#include "main.h"
/**
 * isalpha - function that check for alphabet 
 * character
 * @c: letter to check
 * Return: 1 if @c is lower or uppercase otherwise 0
*/
int _isalpha(int c)
{
    char ch = c;
    if (isalpha(ch))
        return (1);
    return (0);
}
int main(void)
{
    int r;

    r = _isalpha('H');
    putchar(r + '0');
    r = _isalpha('o');
    putchar(r + '0');
    r = _isalpha(108);
    putchar(r + '0');
    r = _isalpha(';');
    putchar(r + '0');
    putchar('\n');
    return (0);
}