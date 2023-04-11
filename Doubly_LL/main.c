#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

void Insert_Before(struct Node** first, int new_data)
        {
    struct Node* new_node
            = (struct Node*)malloc(sizeof(struct Node));
    
    new_node->data = new_data;
    new_node->next = (*first);
    new_node->prev = NULL;
    
    if ((*first) != NULL)
        (*first)->prev = new_node;
    (*first) = new_node;
        }
        
        void Insert_After(struct Node* prev_node, int new_data)
                {

            if (prev_node == NULL) {
                printf("the given previous node cannot be NULL");
                return;
            }


            struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));


            new_node->data = new_data;
            new_node->next = prev_node->next;
            prev_node->next = new_node;
            new_node->prev = prev_node;


            if (new_node->next != NULL)
                new_node->next->prev = new_node;
                }

                void Insert_Last(struct Node** first, int new_data)
                        {
                    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

                    struct Node* last = *first;


                    new_node->data = new_data;
                    new_node->next = NULL;

                    if (*first == NULL) {
                        new_node->prev = NULL;
                        *first = new_node;
                        return;
                    }

                    while (last->next != NULL)
                        last = last->next;


                    last->next = new_node;
                    new_node->prev = last;


                        }

                        void display(struct Node* node)
                                {
                    struct Node* last;
                    printf("\nThe Created Linked List is: \n");
                    while (node != NULL) {
                        printf(" %d ", node->data);
                        last = node;
                        node = node->next;
                    }
                    }
                    
                    void Delete_Position(struct Node** first, struct Node* del)
                            {
    if (*first == NULL || del == NULL)
        return;
    
    if (*first == del)
        *first = del->next;
    
    if (del->next != NULL)
        del->next->prev = del->prev;
    
    if (del->prev != NULL)
        del->prev->next = del->next;
    
    free(del);
                            }


                                /* Driver program to test above functions*/
                                int main()
                                {
                                    /* Start with the empty list */
                                    struct Node* head = NULL;

                                    // Insert 6. So linked list becomes 6->NULL
                                    Insert_Last(&head, 6);

                                    // Insert 7 at the beginning. So linked list becomes
                                    // 7->6->NULL
                                    Insert_Before(&head, 7);

                                    // Insert 1 at the beginning. So linked list becomes
                                    // 1->7->6->NULL
                                    Insert_Before(&head, 1);

                                    // Insert 4 at the end. So linked list becomes
                                    // 1->7->6->4->NULL
                                    Insert_Last(&head, 4);

                                    // Insert 8, after 7. So linked list becomes
                                    // 1->7->8->6->4->NULL
                                    Insert_After(head->next, 8);
                                    
                                    //Delete 7,
                                    Delete_Position(head, head->next);

                                    printf("Created DLL is: ");
                                    display(head);

                                    getchar();
                                    return 0;
                                }
