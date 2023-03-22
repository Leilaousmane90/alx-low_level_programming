#include <stdio.h>

/**
 * times_table - prints the times table of n
 * @n: the integer to print the times table of
 *
 * Return: void
 */
void times_table(int n)
{
    int i, j, product;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            product = i * j;
            if (j == 0)
            {
                printf("%d", product);
            }
            else
            {
                printf(", %d", product);
            }
        }
        printf("\n");
    }
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    times_table(9);

    return (0);
}
