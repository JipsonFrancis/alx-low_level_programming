#include <stdio.h>
/**
 *main - entry point for programe
 *
 *
 *Return: 0
 */
int main(void)
{
	int i;
	char decimal[] = {'0','1','2','3','4','5','6','7','8','9'};
	
	for (i = 0; i < 10; i++)
	{
		putchar(decimal[i]);
		if (i == 9)
			putchar('\n');
		putchar(',');
	}

	return (0);
}
