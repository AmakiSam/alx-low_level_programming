#include <stdio.h>

#define MAX_DIGITS 1000

/**
* main - Entry point
* Return: Always 0
*/
int main(void)
{
int fib1[MAX_DIGITS] = {0};
int fib2[MAX_DIGITS] = {0};
int fib3[MAX_DIGITS] = {0};
int temp[MAX_DIGITS] = {0};
int i;

fib1[0] = 1;
fib2[0] = 2;


printf("%d, %d", fib1[0], fib2[0]);


for (i = 3; i <= 98; i++)
{

int carry = 0;
for (int j = 0; j < MAX_DIGITS; j++)
{
int sum = fib1[j] + fib2[j] + carry;
fib3[j] = sum % 10;
carry = sum / 10;
}

printf(", %d", fib3[MAX_DIGITS - 1]);

for (int j = 0; j < MAX_DIGITS; j++)
{
fib1[j] = fib2[j];
fib2[j] = fib3[j];
}
}

printf("\n");

return (0);
}
