#include "main.h"
/**
* *_strncat - like _strcat but it will use n bytes from src
* @dest: string to be concatenated
* @src: string to be concatenated until n limit
* @n: number of bytes that will be used from src
* Return: pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
int a, b;

for (a = 0; dest[a] != '\0'; a++)
;
for (b = 0; src[b] != '\0' && n > 0; b++, n--, b++)
{
dest[a] = src[b];
}
return (dest);
}