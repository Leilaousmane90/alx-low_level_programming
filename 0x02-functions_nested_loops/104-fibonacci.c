#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: 0 on success
 */
int main(void)
{
    int i;
    unsigned long int current = 1, previous = 0, next;
    unsigned long int current2 = 0, previous2 = 0, next2;

    for (i = 1; i <= 98; i++)
    {
        if (current2 != 0)
        {
            printf("%lu%018lu", current2, current);
        }
        else
        {
            printf("%lu", current);
        }

        next = current + previous;
        previous = current;
        current = next;

        next2 = (current2 + previous2 + (current / 10000000000)) % 1000000000000000000;
        previous2 = current2;
        current2 = next2;

        if (i != 98)
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
