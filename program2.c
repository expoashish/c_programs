#include <stdio.h>
#include <string.h>

int main(){
	char a[20]="@#faafsdjfakjsa7";
	char b="/(?=.{7,})(?=.*[0-9]+.*[0-9]+.*)(?=.*[!@#$%&*]+.*[!@#$%&*]+.*)/";
	if (a.match b)
	{
		printf("Strong\n");
	}
	else{
		printf("Weak\n");
	}
}