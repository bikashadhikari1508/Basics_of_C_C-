#include <stdio.h>

void PrintArray(int *A ,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}

int main()
{
    int A[]={2,3,4,6,7};
    int n=5;
    PrintArray(A,n);
    return 0;
}

