#include<stdio.h>
int main(){
   struct employee
   {
      int emp_no;
      char name[30];
      float destination[20];
      char deptt[30];
   }emp;
   printf("Enter emp_no:\n");
   scanf("%d",&emp.emp_no);
   printf("Enter name:\n");
   scanf("%s",emp.name);
   printf("Enter destination :\n");
   scanf("%f",emp.destination);
   printf("Enter deptt:\n");
   scanf("%s",emp.deptt);

   printf("\nEmp_no:%d\n",emp.emp_no);
   printf("Name:%s\n",emp.name);
   printf("Destination:%f\n",*emp.destination);
   printf("Department:%s\n",emp.deptt);
   return 0;
}