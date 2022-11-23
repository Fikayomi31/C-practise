#include "main.h"
/**
 * _isupper - check for uppercase character
 * @k: character to check
 * 
 * Return: 1 for success otherwise 0
*/
int _isupper(int k)
{
    /* using another method to check uppercase */
    if (k >= 'A' && k <= 'Z')
            return (1);

    return (0);
}
int main(void)
{
    char k;

    k = 'A';
    printf("%c: %d\n", k, _isupper(k));
    k = 'a';
    printf("%c: %d\n", k, _isupper(k));
    return (0);
}