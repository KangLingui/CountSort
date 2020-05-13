#include<stdio.h>
#include<stdlib.h>

void charzhao(int arr[],int nlenght,int a)
{

	int i;
	int min = 0;
	int max = 0;
	int mad =(min+nlenght)/2;
	while(arr[mad]!=a)
	{
		if(a>arr[mad])
		{
			min = 	mad;
			mad = (min+nlenght)/2;
		}else if(a<arr[mad])
		{
			max = mad;
			mad = (min+max)/2;
		}
		else
		{
			printf("%d",mad);
			return;
		}
	}
printf("%d",mad);	
	
}



int main()
{
int arr[]	={1,2,3,4};
	charzhao(arr,sizeof(arr)/sizeof(arr[0]),3);
printf("\n");	
return 0;
}

