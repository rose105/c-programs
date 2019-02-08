#include<stdio.h>
int main()
{
    int a[8],i,n,pos,item;
    printf("Enter array size:");
    scanf("%d",&n);

    printf("\nEnter array elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("\nEnter position of item:");
    scanf("%d%d",&pos,&item);
    for(i=n-1;i>=pos-1;i--)
        a[i+1]=a[i];

    a[pos-1]=item;
    n=n+1;

    printf("\nArray after inserting element is:");
    for(i=0;i<n;i++)
        printf("\n%d\t",a[i]);
}
