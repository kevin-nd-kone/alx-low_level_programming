#include "main.h"

/**
 *_strcat - concatenates two strings
 *@dest: A pointer to a character that will be changed
 *@src: A pointer to a character that will also be changed
 *Return: dest
 */

char *_strcat(char *char_one, char *char_two)
{
	int i, j;

	i = 0;
	while (char_one[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (char_two[j] != '\0')
	{
		char_one[i] = char_two[j];
		j++;
		i++;
	}
	char_one[i] = '\0';
	return (char_one);
}
