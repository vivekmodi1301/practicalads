#include <stdio.h>
#include <stdlib.h>

int top,s[10];
int item,i,n,amor_cost,count=0,cost=0,stacksize=1;
// TC : 
void push(int item)
{
    if(top==(stacksize-1))
    {
        printf("Stack overflow\n");
        return;
    }
    count++;
    stacksize+=1;
    cost++;
    top+=1;
    s[top]=item;
    printf("total cost:%d\n",cost);
}
void pop()
{
    if(top==-1)
    {
        printf("Stack is empty\n");
        return;
    }
    cost++;
    count++;
    item=s[top--];
    printf("the deleted item is %d\n",item);
    printf("total cost:%d\n",cost);
}

void multipop(int n)
{
    if(top==-1)
    {
        printf("Stack is empty\n");
        return;
    }
    if(top+1<n)
        n=top+1;
    for(i=0;i<n;i++)
    {
        cost++;
        count++;
        item=s[top--];
        printf("the deleted item is %d\n",item);
        printf("total cost:%d\n",cost);
    }
}
void display()
{
    if(top==-1)
    {
        printf("Stack is empty\n");
        return;
    }
    for(i=0;i<=top;i++)
    {
        printf("%d\n",s[i]);
    }
    printf("the amortized cost for %d operation is %d\n",count,(cost/count));
}
int main()
{
    int choice,n;
    top=-1;
    for(;;)
    {
        printf("1:PUSH\n");
        printf("2:POP\n");
        printf("3:MULTIPOP\n");
        printf("4:DISPLAY\n");
        printf("5:EXIT\n");
        printf("ENTER OPTIONS\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("ENTER THE NUMBER TO PUSH TO STACK\n");
                   scanf("%d",&item);
                   push(item);
                   break;
            case 2:pop();
                   break;
            case 3:printf("ENTER NUMBER OF ELEMENTS TO MULTIPOP FROM STACK");
                   scanf("%d",&n);
                   multipop(n);
                   break;
            case 4:display();
                   break;
            case 5:exit(0);
                   break;
            default:printf("INVALID\n");
                    break;
        }
    }
    return 0;
}