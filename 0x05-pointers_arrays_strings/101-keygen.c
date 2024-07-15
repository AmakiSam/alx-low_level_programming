#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
* Return: Always 0
*/
int main(void)
{
	int i, sum, target;
	char *password;

	srand(time(0));

	sum = 0;
	target = 2772;
	password = malloc(100);

	for (i = 0; sum < target - 122; i++)
	{
		password[i] = rand() % 122 + 1;
		sum += password[i];
	}

	password[i] = target - sum;
	password[i + 1] = '\0';

	printf("%s", password);

	free(password);

	return (0);
}
