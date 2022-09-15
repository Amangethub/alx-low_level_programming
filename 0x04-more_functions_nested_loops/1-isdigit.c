#include "main.h"

/**
 * _isdigit - dtermiens if a character is a digit from 0 to 9 or not
 * @C: input integer
 * Return: 1 if c is a digit or 0 if otherwise
 */
int _isdigit(int c)
{
	char i = '0';
	
	int isdigit = 0;
	
	for (; i <= '9'; i++)
	{
		if (i == c)
		{
			isdigit = 1;
			break;
		}
	}
	return (isdigit);

}
