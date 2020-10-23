#include <stdio.h>

struct student
{
	int id;
	char name[20];
	int rollno;
}s;

int main(){
	printf("Enter student id:\n");
	scanf("%d",&s.id);
	printf("Enter student name:\n");
	scanf("%s",s.name);
	printf("Enter stude] rollno:\n");
    scanf("%d",&s.rollno);

    
	printf("Displaying Information of the student:\n");
    printf("Id : %d\n",s.id);
    printf("Name:%s\n",s.name);
    printf("Roll NO:%d\n",s.rollno);
	return 0;
}