#include "stdio.h"

int main(int argc, char **argv)
{
	int a = 10,b=5;
	int c = 0;
	c = fun_add(a, b); 
	printf("\r\nadd result:%d\r\n",c);
	c = fun_dec(a, b); 
	printf("\r\ndec result:%d\r\n",c);
	c = fun_mul(a, b); 
	printf("\r\nmul result:%d\r\n",c);

	return 0;
}
