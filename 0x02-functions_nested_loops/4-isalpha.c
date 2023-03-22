#include <ctype.h>
#include <stdio.h>

/**
 * _isalpha - checks for alphabetic character
 * @c: character to check
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
    if (isalpha(c))
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

    printf("%c is %s\n", c, _isalpha(c) ? "an alphabetic character" : "not an alphabetic character");

    c = '1';

    printf("%c is %s\n", c, _isalpha(c) ? "an alphabetic character" : "not an alphabetic character");

    return (0);
}
