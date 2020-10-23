#include<stdio.h>
int sum(int i,int j);
int main(){
	int a,b,c;
	printf("Enter first no:\n");
	scanf("%d",&a);
	printf("Enter second no:\n");
	scanf("%d",&b);
	c=sum(a,b);
	printf("Sum of first and second no:%d\n",c);
	return 0;
}

int sum(int i,int j){
	int k;
	k=i+j;
	return(k);
}