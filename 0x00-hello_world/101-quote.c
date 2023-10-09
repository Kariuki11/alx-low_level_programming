#include <unistd.h>
#include <stdio.h>
/**
 * main - entry point.
 * Description - print error message without using puts or printf their man 3.
 * Return: 1 for error.
 */
int main(void)
{
const char *message = "and that piece of art is useful\" - Dora \
Korpar, 2015-10-19\n";
write(2, message, 59);
return (1);
}
