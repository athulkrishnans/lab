#include<stdio.h>
void simplemerge(int a[],int t,int b,int mid);
void mergesort(int a[],int t,int b);
void pt(int a[],int n);
void ary( int a[],int n)
{
	for(int i=0;i<n;i++){
		printf("enter the elements inthe arry");
		scanf("%d",&a[i]);}
}
void main()
{
int n,t=0;
printf("enter the no elmt");
scanf("%d",&n);
int a[n],b=n-1;
ary(a,n);
mergesort(a,t,b);
pt(a,n);
}
void pt(int a[],int n)
{
for(int i=0;i<n;i++)
	{
	printf("%d\n",a[i]);
	}
}



void simplemerge(int a[],int f,int s,int l)
	{
	int x[100],k=0,i=f,j=s;
	while(i<s && j<=l){
	if(a[i]<a[j])
 		x[k++]=a[i++];
	else
		x[k++]=a[j++];
	}
        while(i<s)
		x[k++]=a[i++];
	while(j<=l)
		x[k++]=a[j++];
	for(i=f,k=0;i<=l;i++,k++)
		a[i]=x[k];
	}




void mergesort(int a[],int t,int b){
if(t<b){
 int m=(t+b)/2;
mergesort(a,t,m);
mergesort(a,m+1,b);
simplemerge(a,t,m+1,b);
}}









