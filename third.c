// Pointer to stucture

#include <stdio.h>
int main(){
	struct employee
	{
		char name[20];
		int age;
		float salary;
		char dept[30];
	};
	struct employee emp;
	struct employee *eptr;
	eptr=&emp;
	printf("Enter the name age salary department:\n");
	scanf("%s %d %f %s",emp.name,&emp.age,&emp.salary,emp.dept);
	printf("<<<<<<Details of The Employee You Enterd>>>>>>>\n");
    printf("Name:%s\n",eptr->name);
    printf("Age:%d\n",eptr->age);
    printf("Salary:%f\n",eptr->salary);
    printf("Department:%s\n",eptr->dept);
	return 0;
}