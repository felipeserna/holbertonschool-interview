#include "holberton.h"
/**
* wildcmp - compares two strings and returns 1 if the strings
* can be considered identical, otherwise return 0.
* @s1: string 1.
* @s2: string 2 can contain the special character '*'.
* The special char '*' can replace any string (including an empty string).
* Return: 1 if the strings can be considered identical, otherwise return 0.
*/
int wildcmp(char *s1, char *s2)
{
	if (s1 == s2)
		return (1);

	return (0);
}
