#include<stdio.h>
int main(){
	int i,j,k,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		printf(" ");
		for(j=0;j<2*i+1;j++)
		printf("$",i+1);
		for(j=0;j<n-1-i;j++)
		printf(" ");
		for(j=0;j<n-1-i;j++)
		printf(" ");
		for(j=0;j<2*i+1;j++)
		printf("$",i+1);

	printf("\n");}

    }