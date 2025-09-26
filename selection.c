#include<stdio.h>
void sort(int a[],int n);
void pt(int a[],int n);
void ary( int a[],int n)
{
	for(int i=0;i<n;i++){
		printf("enter the elements inthe arry");
		scanf("%d",&a[i]);}
}
void swap(int a[],int ind,int p){
int temp=a[p];
a[p]=a[ind];
a[ind]=temp;

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
int p=0,ind=0,small;
for(p;p<n-1;p++)
{
	small=a[p];
	for(int c=p+1;c<n;c++)
	{
	if(a[c]<small){
		small=a[c];
		ind=c;		
		}
	}
	swap(a,ind,p);
}
}
