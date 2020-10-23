#include<stdio.h> 
int main(){
	int a[3][4]={{4,8,6,8},{4,7,7,2},{5,6,1,3}};
	int b[3][4]={{7,1,7,1},{2,3,8,2},{3,6,9,3}};
	int c[3][4];
	int i,j;

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			printf("%d \t",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}