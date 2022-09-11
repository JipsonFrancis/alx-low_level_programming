#include <unistd.h>
/**
 *main - entry point for programe
 *
 *
 *Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		write(2, i, 2);
		if (i == 9)
			putchar('\n');
	}

	return (0);
}
