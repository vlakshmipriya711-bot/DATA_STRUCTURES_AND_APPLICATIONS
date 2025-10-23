#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

struct stack
{
    int top;
    char data[SIZE];
};
typedef struct stack STACK;

void push(STACK *s,char item)
{
    s->data[++(s->top)]=item;
}
char pop(STACK *s)
{
    return s->data[(s->top)--];
}

int isbalanced(char exp[])
{
    STACK s;
    s.top=-1;
    char ch,temp;

    for (int i=0;exp[i]!='\0';i++)
    {
        ch = exp[i];
        if(ch=='(' || ch=='[' ||ch=='{' )
            {
                push(&s,ch);
            }
        else if(ch==')' || ch==']' ||ch=='}')
        {
            if(s.top==-1)
                return 0;
            temp = pop(&s);
            if((ch==')' && temp!='(')||(ch==']' && temp!='[')||(ch=='}' && temp!='{'))
                return 0;
        }
    }
    return s.top==-1;
}

int main()
{
    char exp[SIZE];
    printf("\n enter the expression: ");
    scanf("%s",&exp);
    if(isbalanced(exp))
        printf("\n balanced \n");
    else
        printf("\n not balanced \n");
    return 0;
}
