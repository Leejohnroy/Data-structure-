#include<stdio.h>
void main()
{
	int n,i,j,temp,time=0;
	time++;
	printf("enter the number of elements in the array:");
	scanf("%d",&n);
	time++;
	time++;
	printf("enterv the %d elements:",n);
	int array[n];
	time++;
	time++;
	for(i=0;i<n;i++) {
	scanf("%d",&array[i]);
	time++;
	}
	time = time+n+1;
	for(i=1;i<n;i++){
	temp = array[i];
	j=i-1;
	time++;
	time++;
	while(j>=0 && array[j] > temp) {
	array[j+1] = array[j];
	j--;
	time++;
	time++;
	}
	array[j+1] = temp;
	time++;
	}
	time = time+n+1;
	printf("sorted array:");
	for (i=0;i<n;i++){
	printf("%d \t",array[i]);
	time++;
	}
	time = time+n+1;
	printf("\n the time complexity is %d",time);
	printf("\n the space complexity is %d",20+(4*n));
	}
