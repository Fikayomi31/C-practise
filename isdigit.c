#include "main.h"
/**
 * _isdigit - check for digit 0  through 9
 * @c: character to check
 * 
 * Return: 1 if it digit 0 otherwise
*/
int _isdigit(int c)
{
    if (isdigit(c))
            return (1);

    return (0);
}
int main(void)
{
    char c;

    c = '0';
    printf("%c: %d\n", c, _isdigit(c));
    c = 'a';
    printf("%c: %d\n", c, _isdigit(c));
    return (0);
}