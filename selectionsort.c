#include<stdio.h>
void main()
{
		int n,i,j,small,temp=0,t=0;
		t++;
		t++;
		t++;
		printf("enter array size:");
		scanf("%d",&n);
		t++;
		int a[n];
		printf("enter array elements:");
		t++;
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			t++;
			}
		t++;
		for(i=0;i<n;i++)
		{
		t++;
		small=i;
		t++;
		for(j=i+1;j<n;j++)
		{
			t++;
			if(a[small]>a[j])
			{
			small=j;
			}
		}
		t++;
		if(i!=small)
		{
			temp=a[i];
			a[i]=a[small];
			a[small]=temp;
			t++;
			}
		}
		printf("sorted array:");
		t++;
		for(i=0;i<n;i++)
		{
		t++;
		printf("%d\t",a[i]);
		}
		t++;
		t++;
		printf("\n time complexity=%d",t);
		printf("\n space complexity=%d",(8+n*4));
}				
			
			
		
