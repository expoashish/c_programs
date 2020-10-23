#include<stdio.h>
int main(){
	int a=8;
	int *j;
	j=&a;
	printf("Address of a=%p\n",&a);
	printf("Value of a%d\n",a);
	printf("Value at j%d\n",*j);
	printf("value at j%p\n",&a );
}