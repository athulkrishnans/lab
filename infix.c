#include<stdio.h>
#include<ctype.h>
#define size 100
char stack[size];
int top=-1;

void push(char c){
if(top<size-1)
  stack[++top]=c;
else
  printf("stack is full");
}

char pop(){
  if(top==-1){
    printf("stack is empty!!");
    return('\0');}
  else
    return(stack[top--]);
  }

int pro(char c)
{
switch(c)
  {
    case'^' :return 3;
    case'*':
    case'/':return 2;
    case'+':
    case'-':return 1;
    default:return 0;
  }
}

int main()
{
  int i=0,j=0;
  char infix[size],postfix[size];
  char x,c;
  printf("enter the infix expression:\n");
  scanf("%[^\n]",infix);
  while(infix[i]!='\0')
  {
    c=infix[i];
    if(c=='(')
      push(c);
    else
      if(isalnum(c))
        postfix[j++]=c;
      else
        if(c==')')
          while((x=pop())!='('&& x!='\0')
            postfix[j++]=x;
        else
        {
          while(top!=-1&&pro(stack[top])>=pro(c))
            postfix[j++]=pop();
          push(c);
        }
        i++;
  }
  while(top!=-1)
    postfix[j++]=pop();
  postfix[j]='\0';
  printf("postfix expression :\n %s",postfix);
}


