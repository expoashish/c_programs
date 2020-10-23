#include <stdio.h>
int main(){
	int a[6],b[6]={33,64,54,75,74,36};
	for (int i = 0; i < 6; i++)
	{
		printf("\nEnter array element:");
		scanf("%d",&a[i]);
	}
	for (int i = 0; i < 6; i++)
	{
		printf("Elements of the array is:%d\n",a[i]);
	}



	for (int i = 0; i < 6; i++)
	{
		printf("All elements of the array is :%d\n",b[i]);
	}
	return 0;
}