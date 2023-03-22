#include <stdio.h>

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: void
 */
void jack_bauer(void)
{
    int hour, minute;

    for (hour = 0; hour < 24; hour++)
    {
        for (minute = 0; minute < 60; minute++)
        {
            putchar((hour / 10) + '0');
            putchar((hour % 10) + '0');
            putchar(':');
            putchar((minute / 10) + '0');
            putchar((minute % 10) + '0');
            putchar('\n');
        }
    }
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    jack_bauer();

    return (0);
}
    n = 98;
    printf("The absolute value of %d is %d\n", n, _abs(n));

    n = -98;
    printf("The absolute value of %d is %d\n", n, _abs(n));

    return (0);
}
