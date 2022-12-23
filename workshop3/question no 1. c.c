#include <stdio.h>

void mainone(){
	int numA, numB;
	printf("enter a number");
	scanf("%d",&numA);
	printf("enter a number");
	scanf("%d",&numB);
	max(&numA,&numB);
}
void max(int* numA,int* numB){
	if(*numA > *numB){
		printf("\n%d is the maximum number.\n",*numA);
	}
	else{
		printf("\n%d is the maximum number \n",*numB);
	}
}










