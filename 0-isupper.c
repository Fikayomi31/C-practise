#include "main.h"
/**
 * _isupper - check for uppercase character
 * @c: character to check
 * Return: 1 for success otherwise 0
*/
int _isupper(int c)
{
    /* using the isupper to determine the character */
    if (isupper(c))
        return (1);
    return (0);
}
int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}