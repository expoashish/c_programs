#include<stdio.h>
int main(){
	int a[2][2]={{5,7},{6,8}};
	int b[2][2]={{2,8},{3,3}};
	int c[2][2];
	int i,j;

	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			c[i][j]=a[i][j]-b[i][j];
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