#include<stdio.h>
void pt(int a[],int n);
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
pt(a,n);
}
void pt(int a[],int n)
{
for(int i=0;i<n;i++)
	{
	printf("%d\n",a[i]);
	}
}
void main()
{
int n;
printf("enter the no elmt");
scanf("%d",&n);
int a[n];
ary(a,n);
sort(a,n);

}
