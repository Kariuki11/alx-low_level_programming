# include <stdio.h>
/**
 * main -entry point to program.
 * Description - prints types of various data.
 * Return: 0 always to dindicate success.
 */
int main(void)
{
int a;
long int b;
long long int c;
float d;
char e;
printf("Size of a char: %u byte(s)\n", sizeof(e));
printf("Size of an int: %u byte(s)\n", sizeof(a));
printf("Size of a long int: %u byte(s)\n", sizeof(b));
printf("Size of a long long int: %u byte(s)\n", sizeof(c));
printf("Size of a float: %u byte(s)\n", sizeof(d));
return (0);
}
