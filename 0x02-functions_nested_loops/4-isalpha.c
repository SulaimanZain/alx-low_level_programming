#include"main.h"

/**
*  * _isalpha - checks if character is a letter
*   *            both lowercase or uppercase
*    *
*     * @c: takes input from other functions.
*      *
*       * Return: 1 if letter, lowercase, uppercase; 0 for otherwise
*
*/

int _isalpha(int c)
{
if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
{
return (1);
}
else
{
return (0);
}
