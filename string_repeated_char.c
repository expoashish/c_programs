//C Program to Find how many times a character repeated

#include <stdio.h>

int main(){
	char user_input[100]="rohan is a good boy";
	int i=0,j=0,count=0;
	for (i = 0; user_input[i] != '\0'; i++)
	{
		count = 1;
		for (j =i+1; user_input[j] != '\0'; j++)
		{
			if (user_input[i]==user_input[j])
			{
				count++;
				user_input[j]=' ';
			}
		}
		if (user_input[i]!='\0' && user_input[i] != ' ')
		{
			printf("%c appeared= %d times\n",user_input[i],count);
		}

	}
	return 0;
}