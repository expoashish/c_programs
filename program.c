#include<stdio.h>
int main(){
	int a,b;
	float c;
	printf("Enter points you scored:");
	scanf("%d",&a);
	printf("Enter price of the squirt:");
	scanf("%d",&b);
	c=a/12;
	if (c>=b)
	{
		printf("Buy it!\n");
	}
	else
		printf("Try again\n");
	return 0;


}