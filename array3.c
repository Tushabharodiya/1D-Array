#include<stdio.h>
main()
{
	int i,n,sum=0,average;
	printf("Size of array = ");
	scanf("%d",&n);
	
	int a[n];
	printf("Enter of Element = \n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	for(i=0;i<n;i++)
	{
		average=sum/n;
	}
	
	printf("average of array values = %d",average);
}