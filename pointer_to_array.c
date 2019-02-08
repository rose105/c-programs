#include<stdio.h>
int main()
{
    int a[5][2]={1,2,3,4,5,6,7,8,9,10};
    int(*p1)[2],*p2,i,j;
    p1=a;
    for(i=0;i<5;i++)
    {
        p2=(p1+i);
        for(j=0;j<2;j++)
            printf("%d\t",*(p2+j));
        printf("\n");
    }
return 0;
}
