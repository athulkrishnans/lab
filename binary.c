#include<stdio.h>
void ary( int a[],int n)
{
	for(int i=0;i<n;i++){
		printf("enter the elements inthe arry");
		scanf("%d",&a[i]);}
}
void sort(int a[],int n)
{
int temp;
 for(int p=1;p<n;p++)
	{ 
	for(int c=0;c<n-p;c++)
		{
		if(a[c]>a[c+1])
			{
			temp=a[c];
			a[c]=a[c+1];
			a[c+1]=temp;
			}
		}
	}
}
int bin(int a[],int n,int e)
{
int t=0,b=n-1,mid,flag=-1;
while(t<=b)
	{
	mid=(t+b)/2;
	if(a[mid]>e){
 		b=mid-1;
		    }
	else
		{if(a[mid]<e)
			t=mid+1;
		else 
			return mid+1;}
	
}return -1;}
void main()
{
int n,e,re;
printf("enter the no elmt");
scanf("%d",&n);
int a[n];
ary(a,n);
printf("enter the elmt to be search");
scanf("%d",&e);
sort(a,n);
re=bin(a,n,e);
if(re==-1)
{
printf("not found");
}
else{printf("\n item founded @ %d",re);}
}

