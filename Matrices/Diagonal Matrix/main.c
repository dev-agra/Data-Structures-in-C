#include<stdio.h>

int main()
{
    int A[20][20] = {0};
    int M[10];
    int i,j,k,n;

    printf("Enter the order of the Matrix [nxn]: ");
    scanf("%d", &n);

    printf("Enter the elements of the Matrix: ");
    for(k = 0; n > k; k++)
    {
        scanf("%d", &M[k]);
    }

    for(k=0;k<n;)
    {
        for(i=0;i<n;i++)
        {
            for(j=0; j<n;j++)
            {
                if ( i == j)
                {
                    A[i][j] = M[k];
                    ++k;
                }
                else{}
            }
        }

    }


    printf("\n");
    printf("The Diagonal Matrix formed is: \n");
    for(i=0;i<n;i++)
    {
        for(j=0; j<n;j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }


}