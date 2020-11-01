#include <stdio.h>
int main(){
	char str1[100]="Welcome to";
	char str2[100]="Expo Tech";
	char i,j;
	for (i = 0; str1[i]!='\0'; i++)
	{
		for (j = 0; str2[j]!='\0'; j++)
		{
			str1[i]=str2[j];
		}	
	}
		printf("Concatenated string=%s\n",str1);	
	return 0;	
}