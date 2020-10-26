#include<stdio.h>

struct employee
{
	int id;
	char name[25];
	int mobile_no;
	char address[50];
	float salary;

}emp;

int main(){
	printf("Enter Employee id name mobile_no address salary: \n");
	scanf("%d %s %d %s %f",&emp.id,emp.name,&emp.mobile_no,emp.address,&emp.salary);
	printf("<<<<<<Details of The Employee You Enterd>>>>>>>\n");
	printf("Id : %d\n",emp.id);
    printf("Name:%s\n",emp.name);
    printf("Mobile No:%d\n",emp.mobile_no);
    printf("Address:%s\n",emp.address);
    printf("Salary:%f\n",emp.salary);
	return 0;


}