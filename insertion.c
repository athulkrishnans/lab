#include<stdio.h>
void sort(int a[],int n);
void pt(int a[],int n);
void ary( int a[],int n)
{
	for(int i=0;i<n;i++){
		printf("enter the elements inthe arry");
		scanf("%d",&a[i]);}
}

void main()
{
int n;
printf("enter the no elmt");
scanf("%d",&n);
int a[n];
ary(a,n);
sort(a,n);
pt(a,n);
}
void pt(int a[],int n)
{
for(int i=0;i<n;i++)
	{
	printf("%d\n",a[i]);
	}
}
void sort(int a[],int n){
int p;
for(p=1;p<n;                                                                                                                                                                                                                                                                                                   p++){
int i=p-1,key=a[p];
while(i>=0&&a[i]>key){
a[i+1]=a[i];
i--;}
a[i+1]=key;
}
}
