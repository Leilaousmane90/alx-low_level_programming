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

104-fibonacci.c

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
