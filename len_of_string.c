//C Program to Find the Length of a String

#include <stdio.h>
int str_len();
int main(){
	int total;
	total=str_len();
	printf("Total lenght of the string:%d\n",total);
	return 0;
}
int str_len(){
	char user_input[100];
	int count=0;
	int i;
	printf("Enter the  string for its lenght:\n");
	scanf("%s",user_input);
	for (int i = 0; i < user_input[i]; i++)
	{
		count++;
	}
	return count;
}
