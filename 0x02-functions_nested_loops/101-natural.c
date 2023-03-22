#include <stdio.h>

/**
 * main - prints the sum of all multiples of 3 or 5 below 1024
 *
 * Return: 0 on success
 */
int main(void)
{
    int i, sum = 0;

    for (i = 0; i < 1024; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }

    printf("%d\n", sum);

    return (0);
}

102-fibonacci.c

#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: 0 on success
 */
int main(void)
{
    int i;
    long int current = 1, previous = 0, next;

    for (i = 1; i <= 50; i++)
    {
        printf("%ld", current);

        next = current + previous;
        previous = current;
        current = next;

        if (i != 50)
        {
            printf(", ");
        }
        else
        {
            printf("\n");
        }
    }

    return (0);
}
