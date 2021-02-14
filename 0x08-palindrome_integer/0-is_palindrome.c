#include "palindrome.h"
/**
* is_palindrome - checks whether or not a given unsigned integer
* is a palindrome
* @n: number to be checked
* Return: 1 if n is a palindrome, and 0 otherwise
*/
int is_palindrome(unsigned long n)
{
	int reverse = 0;
	int copy = n;
	int last;

	while (n > 0)
	{
		last = n % 10;
		reverse = reverse * 10 + last;
		n /= 10;
	}
	return (copy == reverse ? 1 : 0);
}
