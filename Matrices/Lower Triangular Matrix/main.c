#include<stdio.h>

int main()
{
    int A[20][20] = {0};
    int M[20];
    int i,j,k,n;

    printf(" Enter the order of the Matrix [nxn]: ");
    scanf("%d", &n);

    printf("\nEnter the %d elements of the Matrix: ", n*(n+1)/2);
    printf("\n");
    for(k = 0; k < n*(n+1)/2; k++)
    {
        printf("\nEnter the %d element of the Matrix: ", (k+1));
        scanf("%d", &M[k]);
    }

    for(k=0;k<n*(n+1)/2;)
    {
        for(i=0;i<n;i++)
        {
            for(j=0; j<n;j++)
            {
                if (  i >= j )
                {
                    A[i][j] = M[k];
                    ++k;
                }
                else{}
            }
        }

    }

    printf("\n");
    printf("The Upper Triangular Matrix formed is: \n");
    for(i=0;i<n;i++)
    {
        for(j=0; j<n;j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }


}