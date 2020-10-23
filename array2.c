#include <stdio.h>
int main(){
	int a[5]={6,34,54,64,33};
	int large=a[0];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (a[i]>a[j])
				{
					large=a[j];
					break;
				}	
		}
	}
	printf("%d\n",large);
	return 0;
}