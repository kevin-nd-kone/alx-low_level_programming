#include "main.h"
<<<<<<< HEAD

/**
 * _len - determinate length of a string
 * @s: string
 * Return: int
 */

unsigned int _len(char *s)
{
unsigned int size = 0;
while (*(s + c) != '\0')
{
c++;
}
return (c);
}
=======
#include <stdlib.h>
>>>>>>> 8a3fa7eca7c1ec70b4049d0561ce563b5a5b3eab

/**
 * string_nconcat - concatenates two strings
 * @s1: param string 1
 * @s2: param string 2
 * @n: first bytes of s2 to be used
 * Return: pointer or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j;
char *m;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";

<<<<<<< HEAD
if (n < _len(s2))
	m = malloc(_strlen(s1) + n * sizeof(char) + 1);
=======
if (n < _strlen(s2))
	m = malloc(_len(s1) + n * sizeof(char) + 1);
>>>>>>> 8a3fa7eca7c1ec70b4049d0561ce563b5a5b3eab
else
	m = malloc(_len(s1) + _len(s2) + 1);

if (m == 0)
	return (NULL);

for (i = 0; s1[i] != '\0'; i++)
	m[i] = s1[i];

for (j = 0; s2[j] != '\0' && j < n; i++, j++)
	m[i] = s2[j];

m[i] = '\0';

return (m);
}

/**
 * _strlen - find length of a string
 * @s: string
 * Return: int
 */

unsigned int _len(char *s)
{
unsigned int c = 0;
while(*(s + 1) != '\0')
{
c++;
}
return (c);
}
