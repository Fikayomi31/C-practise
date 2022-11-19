#include "main.h"
/**
 * _islower - check for lowercase character
 * @c: alphabet to check
 * Return: 1 if @c is lowercae otherwise 0
*/
int _islower(int c)
{

    if (c >= 'a' && c <= 'z')
    {
        return (1);

    }
    else
    {
        return (0);
    }
}
int main(void)
{
    int r;

    r = _islower('H');
    putchar(r + '0');
    r = _islower('o');
    putchar(r + '0');
    r = _islower(108);
    putchar(r + '0');
    putchar('\n');
    return (0);
}