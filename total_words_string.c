//C Program to Find the total word of a String

#include <stdio.h>

int wordCount(char name[4000]){
	int total=1,i=0;
	for (int i = 0; name[i] != '\0'; i++)
	{
		if (name[i] ==' ')
		{
			total++;
		}
	}
	return total;
}


int main(){
	char user_input[4000]="best";
	int count = 0;
	count = wordCount(user_input);
	
	printf("Total words in the given string:%d\n",count);

	return 0;

}







