#include<stdio.h>
int main(){
	int marks[6],i,sum=0;
	float avg;
	for (int i = 0; i < 6; i++)
	{
		printf("\nEnter your marks:");
		scanf("%d",&marks[i]);
	}
	for (int i = 0; i < 6; i++)
	{
		sum=sum+marks[i];
		avg=(sum*100)/600;
	}
	printf("Percentage of your marks is :%f\n",avg);
	return 0;
}