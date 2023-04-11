#include<stdio.h>

#   define MAX 5  //MACRO Definition

int st[MAX];      //Declaring Array in Global Scope
int top = -1;     // " " Variable

void push(int st[], int item);
int pop(int st[]);
int peak(int tr[]);
void display(int str[]);

int main()
{
    int choice, item;
    do
    {
        printf("Select The Following Stack Operations\n");
        printf("1-> Push\n");
        printf("2-> Pop\n");
        printf("3-> Peak\n");
        printf("4-> Display\n");
        printf("Enter your choice:\n");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
            {
                printf("Enter the element to be pushed into the stack:\n");
                scanf("%d", &item);
                push(st, item);
                break;
            }
            case 2:
            {
                item = pop(st);
                printf("Removed item is: %d\n", item);
                break;
            }
            case 3:
            {
                item = peak(st);
                printf("Value stored at the top of the stack is: %d\n", item);
                break;
            }
            case 4:
            {
                display(st);
                break;
            }
        }
    }
    while (choice != 5);
    return 0;
}

void push(int st[], int item)
{
    if (top == MAX-1)
    {
        printf("\nOverflow!!");
    }
    else
    {
        top += 1;
        st[top] = item;
    }
}

int pop( int st[])
{
    int item;
    if (top == -1)
    {
        printf("\nUnderflow!!");
        return 0;
    }

    else
    {
        item = st[top];
        top += 1;
    }

    return item;
}

int peak(int st[])
{
    int item;

    if (top == -1)
    {
        printf("\nEmpty Stack!!");
    }
    else
    {
        item = st[top];
        return item;

    }

}

void display(int st[])
{
    int i;
    if (top == -1)
    {
        printf("\nEmpty Stock!!");
    }
    else
    {
        for (i = top; i >= 0; i-- )
        {
            printf("\n%d\n", st[i]);
        }
    }
}



