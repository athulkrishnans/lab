#include<stdio.h>
#define size 10
int choice,item,top=0,s[size];
int isfull(){
if(top>=size)
	return(1);
else 
	return(0);
}
int isempty(){

if(top==0)
	 return(1);
else 
	return(0);}
void push(int item)
{
	if(isfull())
		printf("stack full");
	else
		s[top++]=item;
}
int pop()
	{
	if(isempty())
		printf("stack empty");
	else
		return(s[--top]);}

void main()
{
do 
{ printf("\n1.push\n2.pop\n3.isempty\n4.isfull\n5.exit\n");
printf("enter the choice=");
scanf("%d",&choice);
switch(choice){
	case 1: if(!isfull())
		{
		printf("enter the element to be pushed:");
		scanf("%d",&item);
		push(item);}
		break;
		
	case 2: if(isempty())
			printf("stack is empty");
	        else
			printf("%d",pop());
		break;
	case 3: if (isempty())
			printf("yes");
		else
			printf("no");
		break;
	case 4: if(isfull())
			printf("yes");
		else 
			printf("no");
		break;
	case 5: printf("exiting");
		break;
	default:printf("invalid code");
	}
}
while(choice!=5);
printf("\n");
}
