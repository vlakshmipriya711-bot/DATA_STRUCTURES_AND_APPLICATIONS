#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
struct stack
{
   int top;
   int data[SIZE];
};
typedef struct  stack STACK;
void push(STACK *s,int item)
{
   if(s->top==SIZE-1)
      printf("\n stack overflow");
      else
      {
         s->top =s->top+1;
         s->data[s->top]=item;
      }
}

void pop(STACK*s)
{
   if(s->top==-1)
      printf("\n stack underflow");
   else
   {
      printf("\n element popped is :%d \n",s->data[s->top]);
      s->top=s->top-1;
   }
}

void display(STACK s)
{
   int i;
   if (s.top==-1)
      printf("\n stack is empty\n");
   else
   {
   printf("\n stack contents are :\n");
   for (i = 0; i<=s.top;i++)
   printf("%d\n",s.data[i]);
}
}

int main()
{
   int item,ch;
   STACK s;
   s.top=-1;
   for(;;)
   {
   printf("\n 1.push\n 2.pop\n 3.display\n 4.exit\n");
   printf("\n read choice :");
   scanf("%d",&ch);
   switch(ch)
   {
   case 1:
      printf("\n read element to be pushed : ");
      scanf("%d",&item);
      push(&s,item);
      break;

      case 2:
         pop(&s);
         break;

      case 3:
         display(s);
         break;
      default : exit(0);
   }
   }
   return 0;
}

