#include<stdio.h>
int ln(int a[],int n,int e);
void ary( int a[],int n){

 for(int i=0;i<n;i++){
	printf("enter the elements inthe arry");
	scanf("%d",&a[i]);
}}
void main(){
	 int n,e,id;
	 printf("enter the nbr of element:");
	 scanf("%d",&n);
	 int a[n];
	 ary(a,n);
	 printf("enter the searching elemt");
	 scanf("%d",&e);
	 id=ln( a,n,e);
	 if(id==-1)
	{
	 printf("not found");
	}
	 else {
	 printf("found in %d",id);}
	}




int ln(int a[],int n,int e){
 for(int i=0;i<n;i++){
	if(e==a[i]){
		return ++i;}
		     }
 return -1;}


