#include "main.h"

/**
 * main - Entry point, calls the fibonacci function
 * Return: Always 0
 */
int main(void)
{
    fibonacci();
    return (0);
}

/**
 * fibonacci - Prints the first 98 Fibonacci numbers
 * Description: Starting with 1 and 2, separated by comma and space
 */
void fibonacci(void)
{
    unsigned long int a = 1, b = 2, c;
    int i;

    print_num(a);
    print_num(b);

    for (i = 3; i <= 98; ++i)
    {
        c = a + b;
        print_num(c);
        a = b;
        b = c;

        if (i < 98)
        {
            _putchar(',');
            _putchar(' ');
        }
    }

    _putchar('\n');
}

/**
 * print_number - Prints an unsigned long int number
 * @n: Number to print
 *
 * Description: This function prints a number digit by digit
 */
void print_num(unsigned long int n)
{
    unsigned long int divisor = 1;
    int digit;
    
    if (n == 0)
    {
        _putchar('0');
        return;
    }

    while (n / divisor >= 10)
    {
        divisor *= 10;
    }

    while (divisor != 0)
    {
        digit = (n / divisor) % 10;
        _putchar(digit + '0');
        divisor /= 10;
    }
}
