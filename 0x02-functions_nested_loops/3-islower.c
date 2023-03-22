#include <ctype.h>
#include <stdio.h>

/**
 * _islower - checks for lowercase character
 * @c: character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
    if (islower(c))
    {
        return (1);
    }

    return (0);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char c = 'a';

    printf("%c is %s\n", c, _islower(c) ? "lowercase" : "not lowercase");

    c = 'A';

    printf("%c is %s\n", c, _islower(c) ? "lowercase" : "not lowercase");

    return (0);
}
