#include "main.h"
/**
 * mul - function that multiplies two integer
 * @a: first integer
 * @b: second integer
 * Return: Alway 0
*/
int mul(int a, int b)
{
    return (a * b);
}
int main(void)
{
    printf("%d\n", mul(98, 1024));
    printf("%d\n", mul(-402, 4096));
    return (0);
}