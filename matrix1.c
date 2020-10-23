#include<stdio.h>    
int main(){
	int a[2][2]={{5,6},{7,8}};
	int b[2][2]={{8,10},{3,4}};
	int c[2][2];
	int i,j;

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("print matrix\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d \t",c[i][j]);
		}
		printf("\n");
	}
	return 0;
	


}