/* A_1 Devansh Agrahari EXP-05 (Circular Queue) */
#include <stdio.h>
#include <stdlib.h>

struct Queue
        {
    int size;
    int front;
    int rear;
    int *Q;
        };

void create(struct Queue *q,int size)
        {
    q->size=size;
    q->front=q->rear=0;
    q->Q=(int *)malloc(q->size*sizeof(int));
        }

        void enqueue(struct Queue *q,int x)
                {
    if(q->rear==q->size-1)
        printf("Queue is Full");
    else
    {
        q->rear++;
        q->Q[q->rear]=x;
    }
                }

                int dequeue(struct Queue *q)
                        {
    int x=-1;

    if(q->front==q->rear)
        printf("Queue is Empty\n");
    else
    {
        q->front++;
        x=q->Q[q->front];
    }
    return x;
                        }


    void Display(struct Queue q)
            {
        int i;

        for(i=q.front+1;i<=q.rear;i++)
            printf("%d ",q.Q[i]);
        printf("\n");
            }

                                int main()
                                {
    struct Queue q;
    int choice,size,i,n,m;
    int j,k;
    char choice1;

    printf("\nEnter the size of the Queue to be created: ");
    scanf("%d", &size);
    create(&q,size);

    printf("---->MENU<----\n");
    printf("1->Enqueue\n2->Dequeue\n3->Display");
    printf("\nChoice-> ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            printf("\n****Enter a number one less the Queue size****\n");
            printf("\nEnter the No. of elements in the Queue: ");
            scanf("%d", &n);
            for(i=0;i<n;i++)
            {
                printf("\nEnter the %d element: ",(i+1));
                scanf("%d", &m);
                enqueue(&q,m);
                printf("\n");
                fflush(stdin);
            }
            printf("Do you want to enqueue any data?: ");
            scanf("%c", &choice1);
            if (choice1 == 'y' || choice1 == 'Y')
            {
                printf("\nThe element removed is: %d\n", dequeue(&q));
            } else printf("\nOk");
            printf("\nElements in the Queue are:\n");
            Display(q);
            break;
            case 2:
                printf("\n****Enter a number one less the Queue size****\n");
                printf("\nEnter the No. of elements in the Queue: ");
                scanf("%d", &n);
                for(i=0;i<n;i++)
                {
                    printf("\nEnter the %d element: ",(i+1));
                    scanf("%d", &m);
                    enqueue(&q,m);
                    printf("\n");
                    fflush(stdin);
                }
                printf("How many elements do you want to dequeue: ");
                scanf("%d", &k);
                for(j=0;j<k;j++)
                {
                    printf("\nElement dequeued is: %d", dequeue(&q));
                }
                printf("\n\nElements in the Queue are:\n");
                Display(q);
                break;
                case 3: Display(q);break;
                default: printf("\nInvalid Token entered");

    }
    return 0;
                                }
