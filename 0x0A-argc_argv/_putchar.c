#include
/**
*_putchar - write the character c to stdout
*@c: The character to print
*
*Return: On sucess 1.
*On error, -1 is returned, nd errno i set apprpriately.
*/
int _putchar(cahr c)
{
	return (write(1, &c, 1));
}
