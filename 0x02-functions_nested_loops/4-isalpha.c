#include "main.h"
/**
* _isalpha - checks if alphanum or not
* @c: character
* Description: checks for alphanum character
* Return: 0 or 1
*/
int _isalpha(int c);
{
	return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}
