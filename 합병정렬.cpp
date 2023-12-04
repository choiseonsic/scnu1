#include <stdio.h>

int number =8;
int sorted[8];

void merge(int arr[], int m, int middle, int n)
{
	int i=m;
	int j=middle+1;
	int k=m;
	int t;
	
	while(i<=middle&&j<=n)
	{
		if(arr[i]<arr[j])
		{
			sorted[k]=arr[i];
			i++;
		}
		
		else
		{
			sorted[k]=arr[j];
			j++;
		}
		k++;
	}
	if(i==middle+1)
	{
		int t;
		for(t=j;t<=n;t++)
		{
			sorted[k]=arr[t];
			k++;
		}
		
	}
	else
	{
		int t;
		for(t=i ;t<=middle;t++)
		{
			sorted[k]=arr[t];
			k++;
		}
	}
	
	for(t=m; t<=n;t++)
	{
		arr[t]=sorted[t];
	}
}

void mergesort(int arr[], int m, int n)
{
	if(m<n)
	{
		int middle =(m+n)/2;
		mergesort(arr, m, middle);
		mergesort(arr, middle+1, n);
		merge(arr, m, middle, n);	
	}
	
}

int main() 
{
	int i;
	int arr[8]={27, 10, 12, 20, 25, 13, 15, 22};
	mergesort(arr, 0, 7);
	for(i=0;i<8;i++)
	{
		printf("%d  ", arr[i]);
	}
}


