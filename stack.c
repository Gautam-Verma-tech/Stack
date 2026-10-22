#include<stdio.h>
#include<stdlib.h>
int a[10]; 
int top = -1;
void  push();
void  pop();
void  peek();
void  display();
int main()
{
    int choice;
    while(1)
    {
        printf("\n1-> Push \n2-> Pop \n3-> Peep \n4->Display \n5-> Exit \nEnter your choice:");
        scanf("%d", &choice);
        if(choice == 1)
            push();
        else if(choice == 2)
            pop();
        else if(choice == 3)
            peek();
        else if(choice == 4)
            display();
        else if(choice == 5)
            break;
        else
            printf("Invalid Choice:");
    }
        return 1;
}
void push()
{
    if(top == 9){
        printf("Overflow:");
        return;
    }
    else{
        printf("\n Enter vlaue to push:");
        scanf("%d",&a[++top]);
        printf("\n Push Successfull:");
    }
}
void pop()
{
    if(top == -1)
    {
        printf("\n Stack Underflow:");
        return;
    }
    else{
        printf("\n Popped item = %d",a[top]);
        top--;
        printf("\n Pop Successfull:");
    }
}
void peek()
{
    if(top == -1)
    {
        printf("\n Stack Underflow:");
        return;
    }
    else
        printf("\n Peek element = %d", a[top]);
}
void display()
    {
        if(top == -1)
        {
            printf("\n Stack underflow:");
            return;
        }
        else
    {
        for(int i=top; i>=0; i--)
            printf("\n %d",a[i]);
    }
}