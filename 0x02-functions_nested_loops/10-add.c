#include "holberton.h"

/**
 * add - adds two integers and returns the result
 * @a: first integer to add
 * @b: second integer to add
 *
 * Return: the result of adding a and b
 */
int add(int a, int b)
{
    return (a + b);
}

11-print_to_98.c

#include <stdio.h>

/**
 * print_to_98 - prints all numbers from n to 98
 * @n: the starting number
 *
 * Return: void
 */
void print_to_98(int n)
{
    int i;

    if (n <= 98)
    {
        for (i = n; i <= 98; i++)
        {
            if (i != 98)
            {
                printf("%d, ", i);
            }
            else
            {
                printf("%d\n", i);
            }
        }
    }
    else
    {
        for (i = n; i >= 98; i--)
        {
            if (i != 98)
            {
                printf("%d, ", i);
            }
            else
            {
                printf("%d\n", i);
            }
        }
    }
}
