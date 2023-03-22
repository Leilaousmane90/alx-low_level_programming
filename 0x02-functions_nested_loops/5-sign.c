#include <stdio.h>

/**
 * print_sign - print the sign of a number
 * @n: the number to check
 *
 * Return: 1 if n is positive, -1 if n is negative, and 0 if n is zero
 */
int print_sign(int n)
{
    if (n > 0)
    {
        putchar('+');
        return (1);
    }
    else if (n < 0)
    {
        putchar('-');
        return (-1);
    }
    else
    {
        putchar('0');
        return (0);
    }
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    n = 0;
    printf("%d is %d\n", n, print_sign(n));

    n = 98;
    printf("%d is %d\n", n, print_sign(n));

    n = -98;
    printf("%d is %d\n", n, print_sign(n));

    return (0);
}
