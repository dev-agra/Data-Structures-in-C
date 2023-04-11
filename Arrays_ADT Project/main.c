#include<stdio.h>
//#include<stdlib.h>
#define MAX 20

/* Functions->
 * sort
 * Display
 * Insert
 * Delete
 * Sort_A
 * Sort_B
 * Search_Linear
 * Search_Binary
 * Get
 * Set
 * Max
 * Min
 * Sum
 * Avg
 * Reverse
 * Rotate-left/right
 * Shift-left/right
 * Check_Sorted
 * //Functions of Binary Arrays
 * Merge
 * Union
 * Intersection
 * Difference*/

struct Array {
    int length;
    int array[MAX];
};

void swap(int *x, int *y);
void display(struct Array);

void sort(struct Array*);
void insert_em(struct Array *, int x);
void insert(struct Array *, int in, int x);
int delete(struct Array *, int index);
void append(struct Array*, int n);
void linear_search1(struct Array*, int key);
int linear_searchtrans(struct Array *, int key);
void linear_searchfront(struct Array *, int key);
int binsearch(struct Array *, int k);
int get(struct Array arr, int k);
void set(struct Array *arr, int index, int x);
int max(struct Array);
int min(struct Array);
int sum(struct Array);
int avg(struct Array arr);
void reverse(struct Array*);
void shiftleft(struct Array*);
void shiftright(struct Array*);
void rotateleft(struct Array*);
void rotateright(struct Array *arr);




int main()
{
    int x,y,index,k;
    struct Array arr;
    struct Array arr1;
    struct Array arr2;
    int choice, choice1, choice2;

    printf("Enter the length of the array:\n");
    scanf("%d", &arr.length);

    int i;
    printf("Enter the elements of the array:\n");

    for(i=0;i<arr.length;i++)
    {
        scanf("%d", &arr.array[i]);
    }

    printf("\t ----MENU PROGRAM----\n");
    printf("Choose among the following choices provided: \n");
    printf("1->Sort\n2->Insert on empty\n3->Insert\n4->Delete\n5->Append\n6->Search\n7->Swapping elements\n8->Get\n9->Set\n10->Max\n11->Min\n12->Sum\n13->Avg\n14->Reverse\n15->Rotate\n16->Display\n");
    printf("\nCHOICE: ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:  //Sort
        sort(&arr);display(arr);break;
        case 2:  //Inserting in empty space
        printf("\nEnter the number to be entered: ");scanf("%d", &x);insert_em(&arr,x);display(arr);break;
        case 3:  //Inserting at a spot
        printf("\nEnter an element and index: ");scanf("%d%d",&x,&index);insert(&arr,index,x);display(arr);break;
        case 4:  //Deleting from index
        printf("\nEnter the index from where to delete number: ");scanf("%d", &x);printf("\nThe element deleted is at i.e. : %d", delete(&arr,x));display(arr);break;
        case 5:  //Adding element at the last position
        printf("\nEnter the index to be added at the last:");scanf("%d", &x);append(&arr,x);display(arr);break;
        case 6:  //Search a element
        printf("\tSearch---->MENU<----\n");printf("1->Linear_Message\n2->Transposition\n3->Move to Font\n4->Binary Search\n");printf("Enter the type of search you want to perform:");scanf("%d", &choice1);
        switch(choice1)
        {
            case 1:  //Linear Message
            printf("\nEnter the key to be searched: ");scanf("%d", &k);linear_search1(&arr,k);break;
            case 2:  //Element is brought ahead by one index everytym called
            printf("\nEnter the key to be searched: ");scanf("%d", &k);printf("The element searched for is at: %d\n",linear_searchtrans(&arr,2));display(arr);break;
            case 3:  //Element is called at front
            printf("\nEnter the key to be searched: ");scanf("%d", &k);linear_searchfront(&arr, k);display(arr);if(arr.array[0] % k == 0)printf("\nSearch Successful");else{printf("\nSearch Unsuccessful");}break;
            case 4:  //Binary calling method
            printf("\nEnter the key to be searched: ");scanf("%d", &k);printf("\nThe Element searched is at: %d", binsearch(&arr,k));break;
            default:
                display(arr);break;
        }
        case 7: //Swapping
        printf("\nEnter the element indexes to be swapped: ");scanf("%d %d", &x ,&y);swap(&arr.array[x], &arr.array[y]);display(arr);break;
        case 8:  //Geting numbers by index
        printf("\nEnter the index of the element to be found: ");scanf("%d", &k);printf("The element at the index requested is: %d", get(arr,k));break;
        case 9:  //Replacing numbers by index
        printf("\nOriginal array is: ");display(arr);printf("\nEnter the index and number with which it should be replaced: ");scanf("%d %d", &k,&x);set(&arr,k,x);display(arr);break;
        case 10: //Getting Maximum value
        max(arr);break;
        case 11: //Getting Minimum value
        min(arr);break;
        case 12: //Getting sum of all elements
        sum(arr);
        case 13: //Getting Sum average
        avg(arr);
        case 14: //Reversing an array
        reverse(&arr);display(arr);break;
        case 15: //Rotating an array
        printf("\tRotate---->MENU<----\n");printf("1->Left Shift\n2->Right Shift\n3->Left Rotation\n4->Right Rotation\n");printf("Enter the type of shift/rotation you want to perform: ");scanf("%d", &choice2);
        switch(choice2)
        {
            case 1: //Left Shift
            shiftleft(&arr);display(arr);break;
            case 2: //Right Shift
            shiftright(&arr);display(arr);break;
            case 3: //Left Rotate
            rotateleft(&arr);display(arr);break;
            case 4: //Right Rotate
            rotateright(&arr);display(arr);break;
            default:
                break;
        }
        default:
            break;
    }


}

void swap(int *x, int*y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void display(struct Array arr)
        {
    int i;
    for(i=0;i<arr.length;i++)
    {
        printf("%d ", arr.array[i]);
    }
        }
        void sort(struct Array *arr)
                {
    int temp;

    for(int i=0;i<arr->length;i++)
    {
        for(int j = i+1;j<arr->length;j++)
        {
            if (arr->array[i]>arr->array[j])
            {
                temp = arr->array[i];
                arr->array[i] = arr->array[j];
                arr->array[j] = temp;
            }
        }
    }
                }
                void insert_em(struct Array *arr, int x)
                        {
    arr->array[arr->length] = x;
    arr->length++;
                        }
                        void insert(struct Array *arr, int index, int x)
                                {
    int i;

    if(index>=0 && index <=arr->length)
    {
        for(i=arr->length;i>index;i--)
        {
            arr->array[i]=arr->array[i-1];
        }
        arr->array[index]=x;
        arr->length++;
    }
                                }
                                void append(struct Array *arr, int n)
                                        {
    if(arr->length < MAX)
    {
        arr->array[arr->length] = n;
    }
    arr->length++;
                                        }
                                        int delete(struct Array *arr, int index)
                                                {
    int x,i;
    x = arr->array[index];
    for(i=0;i<arr->length-1;i++)
    {
        arr->array[i] = arr->array[i+1];
        arr->length--;
    }
    return x;
                                                }
                                                void linear_search1(struct Array *arr, int key)
                                                        {
    int i;
    for(i=0;i<arr->length;i++)
    {
        if (arr->array[i] == key)
        {
            printf("\nSearch Successful");
            printf("\nElement is at index: %d", i);
        }
        else if (arr->array[i] != key)
        {
            printf("\n..................");
        }
    }
                                                        }
                                                        int linear_searchtrans(struct Array *arr, int key)
                                                                {
    int i;
    for(i=0;i<arr->length;i++)
    {
        if(key == arr->array[i])
        {
            swap(&arr->array[i-0], &arr->array[i-1]);
            return i-1;
        }
    }
    return 0;
                                                                }
                                                                void linear_searchfront(struct Array *arr, int key)
                                                                        {
    int i;
    for(i=0;i<arr->length;i++)
    {
        if (key == arr->array[i])
        {
            swap(&arr->array[i], &arr->array[0]);
            break;
        }
    }
                                                                        }
                                                                        int binsearch(struct Array *arr, int key)
                                                                                {
    int l,mid,h;
    l=0;
    h = arr->length-1;

    while(l<=h)
    {
        mid = (l+h)/2;
        if(key == arr->array[mid])
        {
            return mid;
        }
        else if(key < arr->array[mid])
        {
            h = mid - 1;
        }
        else if(key > arr->array[mid])
        {
            l = mid + 1;
        }
    }
    return -1;
                                                                                }
                                                                                int get(struct Array arr, int key)
                                                                                        {
    if (key >= 0 && key < arr.length)
    {
        return arr.array[key];
    } else{
        printf("\nElement not found");
    }
    return 0;
                                                                                        }
                                                                                        void set(struct Array *arr, int index, int x)
                                                                                                {
    if(index >= 0 && index < arr->length)
    {
        arr->array[index] = x;
    }
                                                                                                }
                                                                                                int max(struct Array arr)
                                                                                                        {
    int Max = arr.array[0];
    int i;
    for(i=0;i<arr.length;i++)
    {
        if (arr.array[i] > Max)
        {
            Max = arr.array[i];
        }
    }
    printf("\nThe Maximum number in the array is: %d", Max);
    return 0;
                                                                                                        }
                                                                                                        int min(struct Array arr)
                                                                                                                {
    int Min = arr.array[0];
    int i;
    for(i=0;i<arr.length;i++)
    {
        if (arr.array[i] < Min)
        {
            Min = arr.array[i];
        }
    }
    printf("\nThe Minimum number in the array is: %d", Min);
    return 0;
                                                                                                                }
                                                                                                                int sum(struct Array arr)
                                                                                                                        {
    int Total=0;
    for(int i = 0; i < arr.length; i++)
    {
        Total += arr.array[i];
    }
    printf("\nThe sum of all the elemnts in the array is: %d", Total);
    return 0;

                                                                                                                        }
                                                                                                                        int avg(struct Array arr)
                                                                                                                                {
    double Total=0;
    for(int i = 0; i < arr.length; i++)
    {
        Total += arr.array[i];
    }
    printf("\nThe Average Sum of elements in the array is: %lf", (Total/arr.length));
    return 0;
                                                                                                                                }
                                                                                                                                void reverse(struct Array *arr)
                                                                                                                                        {
    int temp;
    int i = 0;
    int j = arr->length-1;
    for(; i<j; i++,j--)
    {
        temp = arr->array[i];
        arr->array[i] = arr->array[j];
        arr->array[j] = temp;
    }
                                                                                                                                        }
                                                                                                                                        void shiftleft(struct Array *arr)
                                                                                                                                                {
    int i;
    for(i=0;i<arr->length;i++)
    {
        arr->array[i] = arr->array[i+1];
    }
    arr->array[arr->length-1 ] = 0;
                                                                                                                                                }
                                                                                                                                                void shiftright(struct Array *arr)
                                                                                                                                                        {
    int i;
    for(i=arr->length;i>0;i--)
    {
        arr->array[i] = arr->array[i-1];
    }
    arr->array[0] = 0 ;

                                                                                                                                                        }
                                                                                                                                                        void rotateleft(struct Array *arr)
                                                                                                                                                                {
    int i,x;
    x = arr->array[0];
    for(i=0;i<arr->length;i++)
    {
        arr->array[i] = arr->array[i+1];
    }
    arr->array[arr->length-1 ] = x;

                                                                                                                                                                }
                                                                                                                                                                void rotateright(struct Array *arr)
                                                                                                                                                                        {
    int i,x;
    x = arr->array[arr->length-1];
    for(i=arr->length;i>0;i--)
    {
        arr->array[i] = arr->array[i-1];
    }
    arr->array[0] = x;

                                                                                                                                                                        }