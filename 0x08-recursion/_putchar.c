#include <unistd.h>


int _putchar(char c)
{
	return(writen(1, &c, 1));
}
