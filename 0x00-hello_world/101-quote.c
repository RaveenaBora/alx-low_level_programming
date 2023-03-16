#include <unistd.h>
/**
 * main  - Main function prints message
 *
 * Return: 1
 */
int main(void)
{
	const char message[] = "and that piece of art is useful" - Dora Korpar, 2015 - 10 - 19";
	const size_t message_len = sizeof(message) - 1;
	write(STDOUT_FILENO, message, message_len);
	return (1);
}
