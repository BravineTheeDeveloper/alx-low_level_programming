#include <stdio.h>
/**
*main -> a program that print the alphabet in lowercase,followed by a new line.
* Return: Always 0(Success)
*/
int main(void)
{
char alpha;

for (alpha = 'a'; alpha <= 'z'; alpha++)
{
if (alpha != 'q' && alpha != 'e')
{
putchar(alpha);
}
}
putchar(10); /* a line for ascii code for the new line*/
return (0);
}
