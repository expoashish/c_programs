#include<stdio.h>
int main(){
	union car
	{
		char owner[90];
		int price;
	}car1;

	printf("Enter the car :");
	scanf("%s",car1.owner);
	printf("\nprice:");
	scanf("%d",&car1.price);

	printf("<<<<<<<<<<<Details of the car is >>>>>>>>\n");

	printf("Name of the car:%s\n",car1.owner);
	
	printf("Price of the car :%d\n",car1.price);
	return 0;
}