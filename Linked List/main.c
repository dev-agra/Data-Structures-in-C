#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
}*first, *last = NULL;

void create(int arr[], int n);
void Display(struct Node *p);
void Insert_Beforefirst(int x);
void Insert(int pos, int x);
void Delete_first();
int Delete(int pos);
int count(struct Node *p);
int sum(struct Node *p);
int max(struct Node *p);
int min(struct Node *p);

        void create(int arr[], int n)
{
    int i;
    struct Node *t;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = arr[0];
    first->next = NULL;
    last = first;

    for(i=1;i<n;i++)
    {
        t = (struct Node *) malloc(sizeof(struct Node));
        t->data = arr[i];
        t->next = NULL;
        last -> next = t;
        last = t;
    }
}

        void Display(struct Node *p)
        {
    while(p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
        }

        void Insert_Beforefirst(int x)
        {
    struct Node *t;
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = x;
    t->next = first;
    first = t;
        }

        void Insert(int pos, int x)
        {
    struct Node *t,*p;
    int i;
    if (pos == 0)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t -> data = x;
        t-> next = first;
        first = t;
    }
    else{
        p = first;
        for(i=0;i<pos-1;i++)
        {
            p = p->next;
        }
        if ( p != NULL)
        {
            t = (struct Node *)malloc(sizeof(struct Node));
            t -> data = x;
            t -> next = p->next;
            p->next = t;
        }
    }
        }

        void Delete_first()
        {
    int x;
    struct Node *p;
    p = (struct Node *)malloc(sizeof(struct Node));
    p = first;
    first = first -> next;
    x = p-> data;
    free(p);
        }

        int Delete(int pos)
        {
    struct Node *p,*q;
    int x = -1, i;
    if (pos == 1)
    {
        x = first->data;
        p = first;
        first = first->next;
        free(p);
    } else{
        p = first;
        q = NULL;
        for(i=0; i <pos-1;i++)
        {
            q = p;
            p = p->next;
        }
        if (p != NULL)
        {
            q -> next = p->next;
            x = p->data;
            free(p);
        }
        return x;
    }
    return 0;
        }

        int count(struct Node *p)
                {
    int l=0;
    while(p != NULL)
    {
        l++;
        p=p->next;
    }
    return l;
                }

        int sum(struct Node *p)
                {
            int s = 0;
            while(p != NULL)
            {
                s += p->data;
                p = p-> next;
            }
            return s;
                }

        int max(struct Node *p)
                {
            int max = -32768;
            while(p != NULL)
            {
                if (p->data > max)
                {
                    max = p->data;
                    p = p->next;
                }
                return max;
            }
            return 0;
                }

        int min(struct Node *p)
                {
            int min = 32767;
            while(p!= NULL)
            {
                if  (p->data < min)
                {
                    min = p->data;
                    p = p->next;
                }
                return min;
            }
                }




        int main()
        {
    int A[20];
    int i,n, choice, pos, x;
    struct Node *temp = NULL;

    printf("Enter the total number of elements in the Linked List: ");
    scanf("%d", &n);

    printf("Enter the elements->\n");
    for(i=0;i<n;i++)
    {
        printf("Enter the %d element:\n", (i+1));
        scanf("%d", &A[i]);
    }
    create(A, n);

    printf("\n---->MENU<----");
    printf("\n1->Insert at first\n2->Insert at Position\n3->Delete at first\n4->Delete at Position\n5->Count number of nodes\n6->Sum of Nodes\n7->Max Value in LL\n8->Min Value in LL\nChoice-> ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1: printf("\nEnter the number to be inserted at the start of the Linked List: ");scanf("%d", &x);Insert_Beforefirst(x);break;
        case 2: printf("\nEnter the Position and the number to be inserted at that position: ");scanf("%d %d", &pos, &x);Insert(pos, x);break;
        case 3: Delete_first();break;
        case 4: printf("\nEnter the position from which the number is to deleted: ");scanf("%d", &pos);printf("\nNumber deleted is: %d",Delete(pos));break;
        case 5: printf("\nNumber of nodes in the Linked List is: %d", count(first));break;
        case 6: printf("\nThe sum of all the nodes in the lInked List is: %d", sum(first));break;
        case 7: printf("\nThe Maximum value in the given Linked List is: %d", max(first));break;
        case 8: printf("\nThe Minimum value in the given Linked List is: %d", min(first));break;
        default:Display(first);break;
    }
    printf("\n");
    Display(first);


    return 0;
        }