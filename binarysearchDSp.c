#include<stdio.h>
int binary_search(int *a ,int n,int se);
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int mid,high,low;
	int se,res;
	scanf("%d",&se);
	 res=binary_search(a,n,se);
	 if(res==-1)
	 {
	 	printf("not found");
	 }
	 else
	 {
	 	printf("found at %d",res);
	 }
	
}
int binary_search(int *a,int n,int se)
{ int low,high,mid;
	low=0;
	high=n-1;
	while(low<=high)
	{
	mid=(high+low)/2;
	if(se==a[mid]) return mid;
	if(se>a[mid])  low=mid+1;
	if(se<a[mid])   high=mid-1;
}
return -1;
}
