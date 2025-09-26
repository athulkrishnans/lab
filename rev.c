#include<stdio.h>
#define size 100
char stack[100];
int top=-1;
void rev(char str[]);
void push(char a){
stack[++top]=a;
}
char pop(){
if(top>-1){
return stack[top--];
}
}
void main()
{
char str[size];
printf("enter the string");
scanf("%s",str);
rev(str);
printf("the reversed string %s \n",str);

}
void rev(char str[]){
int i=0,len=0;
while(str[i]!='\0'){push(str[i++]);
		
		len++;}
for(i=0;i<len;i++)
	str[i]=pop();
str[i]='\0';
}
