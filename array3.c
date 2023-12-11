#include<stdio.h>
main()
{
	int i,n,sum=0;
	
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
	printf("sum of all array element = %d",sum);
}