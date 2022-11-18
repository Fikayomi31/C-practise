#include "main.h"
/**
 * main - printing _putchar followed by new line
 * 
 * Return: 0
*/
int main(void)
{
    char ch[] = "_putchar";
    int i;
    for (i = 0; i < 8; i++)
    {
        putchar(ch[i]);
    }
    putchar('\n');
    return (0);
}