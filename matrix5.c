#include<stdio.h>
int main(){
	int a[3][3]={{2,0,7},{3,1,6},{5,2,5}};
	int b[3][3]={{3,1,0},{2,2,2},{5,5,3}};
	int c[3][3];
	int i,j,k,sum;

 for( i = 0; i < 3; i++ )
  {
    for(j=0;j<3;j++){
    	sum = 0;
    	for(k=0;k<3;k++){
    		sum = sum + a[i][k] * b[k][j];
    	}
    	c[i][j] = sum;
    }
  }
  for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			printf("%d \t",c[i][j]);
		}
		printf("\n");
	}
	return 0;

}