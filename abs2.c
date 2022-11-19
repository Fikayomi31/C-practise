#include "main.h"
/**
 * _abs - compute the absolute value of an integer
 * using the abs() format
 * @n: the integer 
 * Return: abolute value of @n
*/
int _abs(int n)
{
    return (abs(n));
}
int main(void)
{
    int r;

    r = _abs(-1);
    printf("%d\n", r);
    r = _abs(0);
    printf("%d\n", r);
    r = _abs(1);
    printf("%d\n", r);
    r = _abs(-98);
    printf("%d\n", r);
    return (0);
}