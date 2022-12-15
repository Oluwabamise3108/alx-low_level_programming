#include "main.h"

/**
* _isupper - check if parameter is an uppercase character
* @c: input character
* Return: 1 if is an uppercase character, 0 if otherwise
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
