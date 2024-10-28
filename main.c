#include <stdio.h>
#define Max 20

int stack[Max];
int top = -1;
int main()
{
    int num,value;
    while(1)
    {
    printf("Enter 1 to push\n 2 to pop\n 3 to Display\n 4 to exit\n");
    scanf("%d",&num);

    switch(num)
    {
    case 1:if(top == Max-1)
        {
            printf("Stack Exceeded\n");
            return 1;
        }
        else
        {
            printf("Enter Value to push\n");
            scanf("%d",&value);
            stack[++top] = value;
            printf("Pushed value = %d\n",value);
        }
        break;

    case 2:if(top == -1)
        {
            printf("Stack is empty\n");
            return 1;
        }
        else
        {
            printf("popped value = %d",stack[top--]);
        }
        break;

    case 3:
        printf("stack Elements\n");
        for(int i = 0;i<= top;i++)
        {
            printf("%d\n",stack[i]);
        }
        break;

    case 4:
        printf("Exited from stack\n");
        break;

    default:
        printf("check with instructions and enter valid number\n");
        break;

    }
    }

    return 0;
}
