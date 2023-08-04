#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%c",&a);
	
	c = a - 'A';
	
	if(c<32)
	printf("%c",a);
	else
	printf("%c",a-32);
	
	return 0;
 } 
