#include <stdio.h>

/**
 * main - prints the sum of even-valued terms in the Fibonacci sequence
 *        whose values do not exceed 4,000,000
 *
 * Return: 0 on success
 */
int main(void)
{
    long int current = 2, previous = 1, next;
    long int sum = 2;

    while (current <= 4000000)
    {
        next = current + previous;
        previous = current;
        current = next;

        if (current % 2 == 0)
        {
            sum += current;
        }
    }

    printf("%ld\n", sum);

    return (0);
}
