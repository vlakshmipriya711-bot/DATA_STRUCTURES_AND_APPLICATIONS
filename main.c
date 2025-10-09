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
   s->data[++(s->top)]=item;
}

void pop(STACK*s)
{
   return s->data[(s->top)--];
}

void display(STACK s)
{
   int i;
   for (i = 0; i<=s.top;i++)
   printf("%d\n",s.data[i]);
}

/*void reverse(s)
{
   s.top =
}*/

int main()
{
   int item,ch;
   STACK s;
   s.top=-1;
   for(;;)
   {

   printf("\n option :");
   scanf("%d",&ch);
   switch(ch)
   {
   case 1:
      printf("\n element to be pushed :");
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
