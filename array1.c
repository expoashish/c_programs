#include <stdio.h>
int main(){
	int a[5]={6,34,54,64,33};
	int large=a[0];
	for (int i = 0; i < 5; i++)
	{
		if (a[i]>large)
		{
			large=a[i];
		}
	}
	printf("%d\n",large);
	return 0;
}