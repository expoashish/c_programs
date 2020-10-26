// Array of structure

#include<stdio.h>
int main(){
	struct employee
	{
		char name[20];
		int age;
		float salary;
		char dept[30];
	};
	struct employee emp[5];
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("Enter the name age salary department:\n");
		scanf("%s %d %f %s",emp[i].name,&emp[i].age,&emp[i].salary,emp[i].dept);
	}
	printf("<<<<<<<<<<<<<<<<Details of the Employee>>>>>>>>>>>>>>>>>>>\n");
	for (i = 0; i < 5; i++)
	{
		printf("\nName:%s\n",emp[i].name);
		printf("Age:%d\n",emp[i].age);
		printf("Salary:%f\n",emp[i].salary);
		printf("Department:%s\n",emp[i].dept);
	}
	return 0;
}