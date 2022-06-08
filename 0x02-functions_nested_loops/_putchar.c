/**
*_putchar - writes the charecater s to stdout
*
*Return: On sucess 1.
*On error, return -1
*/

int _putchar(char c)
{
return (write(1, &c, 1));
}
