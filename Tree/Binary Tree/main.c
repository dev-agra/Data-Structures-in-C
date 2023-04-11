#include<stdlib.h>
#include<stdio.h>

struct Node
        {
    struct Node *lchild;
    struct Node *rchild;
    int data;
};
struct Node *root = NULL;

struct Queue
        {
    int size;0
    int front;
    int rear;
    struct Node  **Q;    //Node pointer so double pointer
        };


                                void create(struct Queue *q,int size)
            {
        q->size=size;
        q->front=q->rear=0;
        q->Q=(struct Node **)malloc(q->size*sizeof(struct Node *));
            }

                                void enqueue(struct Queue *q,struct Node * x)
                {
    if(q->rear == q->size)
        printf("Queue is Full");
    else
    {
        q->rear++;
        q->Q[q->rear]=x;
    }}

                                struct Node * dequeue(struct Queue *q)
                        {
    struct Node* x=NULL;

    if(q->front==q->rear)
        printf("Queue is Empty\n");
    else
    {
        q->front++;
        x=q->Q[q->front];
    }
    return x;
                        }

                                int isEmpty(struct Queue q)
                                {
    return q.front == q.rear;
                                }

                                void create_node()
                                {
    struct Node *p,*t;
    int x;
    struct Queue q;
    create(&q, 100);
    printf("Enter the root value: ");
    scanf("%d", &x);
    root = (struct Node *)malloc(sizeof(struct Node));
    root->data = x;
    root->lchild = root->rchild = 0;
    enqueue(&q, root);
    while(!isEmpty(q))
    {
        p = dequeue(&q);
        printf("Enter the value of left child of %d: ",p->data);     //Code of left child
        scanf("%d", &x);
        if (x!=-1)
        {
            t = (struct Node *)malloc(sizeof(struct Node));
            t->data = x;
            t->lchild = t->rchild = 0;
            p->lchild = t;
            enqueue(&q, t);
        }
        printf("\n");
        printf("Enter the value of right child of %d: ",p->data);  //Code of right child
        scanf("%d", &x);
        if (x!=-1)
        {
            t = (struct Node *)malloc(sizeof(struct Node));
            t->data = x;
            t->lchild = t->rchild = 0;
            p->rchild = t;
            enqueue(&q, t);
        }}}

                                void preorder(struct Node *p)
                                            {
        if (p)
        {
            printf("%d ", p->data);
            preorder(p->lchild);
            preorder(p->rchild);
        }}

                                void inorder(struct Node *p)
                                                {
    if (p)
    {
        preorder(p->lchild);
        printf("%d ", p->data);
        preorder(p->rchild);
    }}

                                void postorder(struct Node *p)
                                                        {
    if (p)
    {
        preorder(p->lchild);
        preorder(p->rchild);
        printf("%d ", p->data);
    }}

                                int main()
                                {

    create_node();
    printf("Preorder of Tree is: ");
    preorder(root);
    printf("\n");

    printf("Inorder of Tree is: ");
    inorder(root);
    printf("\n");

    printf("Postorder of Tree is: ");
    postorder(root);

    return 0;
                                }