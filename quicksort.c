#include<stdio.h>
void sort(int a[],int left,int right);
int part(int a[],int left,int right);
void swap(int *a,int *b){
int temp=*a;
*a=*b;
*b=temp;

}
void main()
{
int n;
printf("enter the no elmt");
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
		printf("enter the elements inthe arry");
		scanf("%d",&a[i]);}
int right=(n-1),left=0;
sort(a,0,(n-1));
for(int i=0;i<n;i++)
	printf("%d\n",a[i]);

}
int part(int a[],int left,int right){
int key=a[left];
int i=left+1, j=right;

do{
while(i<right && a[i]<key)
i++;

while(j>left && a[j]>key)
j--;
if(i<j)
swap(&a[i],&a[j]);
}
while(i<j);
swap(&a[left],&a[j]);

return(j);
}

void sort(int a[],int left,int right)
{
if(left<right){
int post=part(a,left,right);
sort(a,left,post-1);
sort(a,post+1,right);
}
}




