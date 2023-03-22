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
