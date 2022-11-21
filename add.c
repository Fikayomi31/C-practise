#include "main.h"
/**
 * add - add two integer
 * @n1: first integer
 * @n2: second integer
 * Return: n1 + n2
*/
int add(int n1, int n2)
{
    int sum;
    sum = n1 + n2;

    return (sum);
}
int main(void)
{
    int n;

    n = add(89, 9);
    printf("%d\n", n);
    return (0);
}