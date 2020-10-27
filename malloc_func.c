//C Program using malloc()

#include <stdio.h>
#include <malloc.h>
int main(){
	int i,num1,num2,*iptr;
	float *fptr;

	printf("\n Enter the number for integer:");
	scanf("%d",&num1);
	iptr=malloc(num1*2);

	printf("\n Please enter %d integer values:",num1);
	for (int i = 0; i < num1; i++)
	{
		scanf("%d",iptr+i);
	}

	printf("\n Enter the number for real values:");
	scanf("%d",&num2);
	fptr=malloc(num2*4);

	printf("\nPlease enter %d real values:",num2);
	for (int i = 0; i < num2; i++)
	{
		scanf("%f",fptr+i);
	}
	printf("\n You have entered these integer values:");
	for (int i = 0; i < num1; i++)
	{
		printf("\n%4d",*(iptr+i));
	}
	printf("\n You have entered these real values");
	for (int i = 0; i < num2; i++)
	{
		printf("\n%f",*(fptr+i));
	}

	return 0;
}