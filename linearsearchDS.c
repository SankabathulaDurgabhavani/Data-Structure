#include<stdio.h>
int linear(int *a,int n,int se)
{ 
   int i;
   for(i=0;i<n;i++)
   {
   	if(a[i]==se) return i;   	
  }
  return -1;
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int se,res;
	scanf("%d",&se);
	res=linear(a,n,se);
	if(res==-1)
	{
		printf("element not found");
	}
	else
	{
		printf("found at %d",res);
	}
	
}
