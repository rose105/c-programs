#include<stdio.h>
int main()
{
    int a[10][10],i,j,r1,c1,r2,c2,sum=0,k;
    printf("Enter value of row and column for first matrix:");
    scanf("%d%d",&r1,&c1);

    printf("\nEnter row and column for second matrix:");
    scanf("%d%d",&r2,&c2);

    if(c1==r2)
    {
        printf("Enter first matrix");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
                scanf("%d",&a[i][j]);
        }
        printf("Enter second matrix");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
                scanf("%d",&b[i][j]);
        }

    }
