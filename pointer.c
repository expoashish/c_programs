#include<stdio.h>
int main(){
	int b=5;
	printf("Address of b=%p\n",&b );
	printf("value of b=%d\n",*(&b));
	printf("value of b=%d\n",b );
	return 0;
}
