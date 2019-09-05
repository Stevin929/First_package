#include <stdio.h>

int partition(int R[],int low,int high)
{
	int tmp=R[low];
	while(low<high)
	{
		while(low<high&&R[high]>=tmp)
			high--;
			R[low]=R[high];
		while(low<high&&R[low]<=tmp)
			low++;
			R[high]=R[low];
	}
	R[low]=tmp;
	return low;
 }
  
void QuickSort(int R[],int low,int high)
{
	int i;
	if(low<high)
	{
		i=partition(R,low,high);
		QuickSort(R,low,i-1);
		QuickSort(R,i+1,high); 
	}
}

int main()
{
	int k,n=7;
	int a[7]={2,6,1,9,8,5,0};
	
	QuickSort(a,0,n-1);
	
	for(k=0;k<n;k++)
	printf("%d ",a[k]);
	
	return 0;
}
