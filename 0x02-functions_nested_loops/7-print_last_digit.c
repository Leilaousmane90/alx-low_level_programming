#include <stdio.h>

/**
 * print_last_digit - print the last digit of a number
 * @n: the number to get the last digit of
 *
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
    int last_digit;

    last_digit = n % 10;
    if (last_digit < 0)
    {
        last_digit = -last_digit;
    }

    putchar(last_digit + '0');

    return (last_digit);
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
    printf("The last digit of %d is %d\n", n, print_last_digit(n));

    n = 98;
    printf("The last digit of %d is %d\n", n, print_last_digit(n));

    n = -98;
    printf("The last digit of %d is %d\n", n, print_last_digit(n));

    return (0);
}
