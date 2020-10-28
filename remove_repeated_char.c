// C Program to remove repeated character from given string

#include <stdio.h>
int main(){
	char string[100]="ashsishyadafv";
	int i=0,j=0,count=0;
	for (i = 0; string[i] !='\0'; i++)
	{
		count=1;
		for (j = i+1; string[j]!='\0'; j++)
		{
			if (string[i]==string[j])
			{
				count++;
				string[j]=' ';
			}
		}
		if (string[i]!='\0' && string[i] != ' ')
		{
			printf("%c only in the string\n",string[i]);
		}
	}

	return 0;
}