#include <stdio.h>


int main()
{
	int num, cube;
	
	
	printf("enter any number: ");
	scanf("%d", &num);
	
	cube= num*num*num;
	
	printf("cube of %d is %d", num, cube);
	
	return 0;

}
