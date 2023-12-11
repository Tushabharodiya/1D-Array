#include<stdio.h>
main()
{
	int i,n,sum;
	
	printf("Size of Array = ");
	scanf("%d",&n);
	
	int a[n],b[n],c[i];
	
	printf("Enter the elements in first array = \n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("Enter the elements in second array = \n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&b[i]);
	}
	printf("Sum of these two array = \n");
	for(i=0;i<n;i++)
	{
		c[i]=a[i]+b[i];
	}
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
    	printf("%d\n",c[i]);
	}
}