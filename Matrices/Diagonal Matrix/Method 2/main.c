#include<stdio.h>
#include<stdlib.h>

struct Matrix
        {
    int *A;
    int n;
        };

void set(struct Matrix *, int i, int j, int x);
int get(struct Matrix, int i, int j);
void Display(struct Matrix);

int main()
{
    struct Matrix m;
    int i,j,x;

    printf("Enter the common order of the Matrix: ");
    scanf("%d", &m.n);

    m.A = (int *)malloc(m.n *sizeof(int ));
    printf("Enter the matrix elements: ");
    for(i=1;i<m.n;i++)
    {
        for(j=1;j<m.n;j++)
        {
            scanf("%d", &x);
        }
    }

}