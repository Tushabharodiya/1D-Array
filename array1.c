#include<stdio.h>
main()
{
	int i,n;
	
	printf("Enter Size Of Array = ");
	scanf("%d",&n);

	int a[n];	
	printf("Enter Value Elements = \n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("Array Element = ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}