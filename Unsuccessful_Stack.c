#include<stdio.h>
#include<stdlib.h>

struct stack
        {
    int size;
    int TOP;
    int *S;
        };

void create(struct stack *st)
        {
    printf("Enter the size of the array:\n");
    scanf("%d", &st->size);
    st->TOP = -1;
    st->S=(int*)malloc(st->size*sizeof(int));
        }

        int Display(struct stack st)
        {
    int i;
    for(i=st.TOP;i>= 0; i--)
    {
        printf("Elements of the Stacks are:\n");
        printf("%d\n", st.S[i]);
    }
    return 0;
        }

        void Push(struct stack *st, int x)
                {
    x = -1;
    if (st->TOP == st->size - 1)
    {
        printf("Stack is full-Overflow\n");
    } else{
        st->TOP++;
        st->S[st->TOP] = x;
    }
                }

                int pop(struct stack *st)
                        {
    int x = -1;
    if (st->TOP == -1)
    {
        printf("Stack  Underflow");
    } else{
        x = st->S[st->TOP];
        st->TOP--;
    }
    return x;
                        }

                        int peek(struct stack st, int pos)
                                {
   int x = -1;
   if (st.TOP - pos + 1 < 0)
   {
       printf("Invalid position\n");
   } else{
       x = st.S[st.TOP-pos+1];     //Index at that point
   }
   return x;
                                }

                                int StackTOP(struct stack st)
                                {
    if (st.TOP == 0-1)
    {
        return -1;
    } else{
        return st.S[st.TOP];
    }

                                }

                                int IsEmpty(struct stack st)
                                        {
    if (st.TOP == -1)
    {
        return 1;   //TRUE
    } else{
        return 0;  //FALSE
    }
                                        }

                                        int IsFull(struct stack st)
                                                {
    if (st.TOP == st.size - 1)
    {
        return 1;
    } else{
        return 0;
    }
                                                }

    int main()
    {
        struct stack st;
        create(&st);
        Push(&st,10);
        Push(&st,20);
        Push(&st,30);
        Push(&st,40);
        Push(&st,50);
    printf("The topmost element of the stacks is:\n%d", StackTOP(st));

    if (IsFull(st) == 1 )
        pop(&st);

    else{
        Push(&st,60);
    }

    printf("Value at the 2nd position is:%d", peek(st,2) );

    if(IsEmpty(st) == 1)
    {
        Push(&st,70);
    } else{
        pop(&st);
    }

    printf("Elements of the stacks finally are: %d\n", Display(st));
    }

