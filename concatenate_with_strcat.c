//C Program to Concatenate Two Strings

#include <stdio.h>
#include<string.h>
int main(){
	char string1[100]="ash";
	char string2[100]="ish";
	strcat(string1,string2);
	printf("%s\n",string1);
	return 0;
}