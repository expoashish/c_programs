#include<stdio.h>
int main(){
	int a[2][2]={{3,5},{9,11}};
	int b[2][2]={{2,1},{3,5}};
	int c[2][2];
	int i,j;
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			c[i][j]=a[i][j]*b[i][j];
		}
	}
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			printf("%d \t",c[i][j]);
		}
		printf("\n");
	}
	return 0;

}