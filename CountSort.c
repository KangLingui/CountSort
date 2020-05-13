#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void CountSort(int arr[],int nlenght)
{
		
	int i;
	int max = arr[0],min = arr[0];
	//找最大值和最小值
	for(i = 1;i<nlenght;i++)
	{
		if(arr[i]>max)
		{
			max = arr[i];
		}
		if(arr[i]<min)
		{
			min = arr[i];
		}
		
	}
	//计数数组
	int num = max-min+1;
	int *arr1  =NULL;
	arr1=(int *)malloc(sizeof(int)*(num));
	memset(arr1,0,sizeof(int)*(num));
	
	//计数
	for(i = 0;i<nlenght;i++)
	{
			int a=arr[i]-min;
			arr1[a]++;
	}

	//防数据
	int j=0;
	for(i = 0;i<num;i++)
	{
		while(arr1[i] !=0 )	
		{
		arr[j] = min+i;	
		j++;
		arr1[i]--;
		}
	}
	
	//释放
	free(arr1);
	arr1 = NULL;
	
}

void print(int arr[],int nlenght)
{
	int i;
	for(i = 0;i<nlenght;i++)
	{
	printf("%d  ",arr[i]);	
	}	
}

int main()
{
	

int arr[]= {1,5,15,1,2,3,5,6,4,4,3,2,1};
	CountSort(arr,sizeof(arr)/sizeof(arr[0]));
	print(arr,sizeof(arr)/sizeof(arr[0]));
	printf("\n");
	return 0;
	
}
