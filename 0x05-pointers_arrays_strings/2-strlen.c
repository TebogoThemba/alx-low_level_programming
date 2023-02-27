#include "main.h"

/**
 * _strlen - returns the length of a string
 * Owned by Black_Wolf
 * @s: char to check
 * Description: this will return the length of a string
 * Return: 0 is success
*/

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
