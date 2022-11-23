#include "main.h"
/**
 * _isdigit - chexk for digit
 * @c: character to check
 * 
 * Return: 1 for digit otherwise 0
*/
int _isdigit(int k)
{
    if (k >= '0' && k <= '9')
            return (1);
    
    return (0);
}
int main(void)
{
    char k;

    k = '0';
    printf("%c: %d\n", k, _isdigit(k));
    k = 'a';
    printf("%c: %d\n", k, _isdigit(k));
    return (0);
}