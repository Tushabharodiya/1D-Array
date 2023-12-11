#include<stdio.h>
main()
{
	int i,n,n1,n2=n+n1,a[100],b[100],c[200],temp=0;
	
	
	printf("Size of Element = ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);	
		c[i]=a[i];
	}
	printf("Size of element = ");
	scanf("%d",&n1);
	
	temp=i;
	for(i=0;i<n1;i++)
	{
		printf("a[%d] =",i);
		scanf("%d",&b[i]);
		c[temp]=b[i];
		temp++;
	}
	printf("Merging Of Array = ");
	for(i=0;i<n+n1;i++)
	{
		printf("%d ",c[i]);
	}
		
}