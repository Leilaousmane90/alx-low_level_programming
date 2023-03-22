#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char letter;
    int i;

    for (i = 0; i < 10; i++)
    {
        letter = 'a';

        while (letter <= 'z')
        {
            putchar(letter);
            letter++;
        }

        putchar('\n');
    }

    return (0);
}
