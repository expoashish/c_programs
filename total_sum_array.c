#include <stdio.h>
int main(){
	int size,sum=0;
	scanf("%d",&size);

	int arr[size],value;
	int a[1000]; 
    int i, no_arr;
    
    scanf("%d", &no_arr); 
    for (i = 0; i < no_arr; i++) { 
        scanf("%d",&value); 
    } 
    for (i = 0; i < no_arr; i++){
    	sum=sum+value; 

    }
    printf("%d ", sum);
	return 0;
}