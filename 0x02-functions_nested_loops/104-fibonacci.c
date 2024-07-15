#include <stdio.h>

/**
* main - Entry point
* Return: Always 0
*/
int main(void)
{
unsigned int fib1 = 1;
unsigned int fib2 = 2;
unsigned int fib3;
int i;


printf("%u, %u", fib1, fib2);


for (i = 3; i <= 98; i++)
{
fib3 = fib1 + fib2;


printf(", %u", fib3);


fib1 = fib2;
fib2 = fib3;
}

printf("\n");

return (0);
}
