#include "main.h"
/**
 * add - print the addition of two integer
 * @n1: first integer
 * @n2: second integer
 * Return: the result
*/
int add(int n1, int n2)
{
    return (n1 + n2);
}
int main(void)
{
    int n;

    n = add(89, 9);
    printf("%d\n", n);
    return (0);
}