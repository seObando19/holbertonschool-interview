#include "palindrome.h"

/**
 * is_palindrome - Check if an integer is palindrome.
 *
 * @n: Number to check
 * Return: 1 if number is palindrome, 0 if not.
 */
int is_palindrome(unsigned long n)
{
	char buffer[32];
	int len = 0, start = 0;

	sprintf(buffer, "%lu", n);
	while (buffer[len])
		len++;

	len = len - 1;
	while (start < len)
	{
		if (buffer[start] != buffer[len])
			return (0);
		start++;
		len--;
	}
	return (1);
}