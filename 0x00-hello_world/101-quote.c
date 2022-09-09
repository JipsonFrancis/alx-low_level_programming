#include <unistd.h>
/**
 *main - prints text to screen
 *
 *Return: 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 60);
	return (1);
}
