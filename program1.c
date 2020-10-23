#include <stdio.h>
#include <string.h>
int main(){
	char a[20];
	int i,j,large=a[0],success=0;
	printf("Enter string : ");
	scanf("%s",a);

	for(i=0;i< strlen(a);i++){
		for(j=0;j<strlen(a);j++){
			if(i != j){
				if(a[i] == a[j]){
					success = 1;
					printf("Deja vu");
					return 0;
				}
			}
		}
	}
	if(success == 0){
		printf("Unique");
	}


	return 0;
}