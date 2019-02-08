#include<stdio.h>
#define MAX 10

int N;
void create(int *);
void traverse(int *);
void insert(int [],int,int);
int main()
{
int a[MAX];
int choice , pos,item;

create(a);

while(1)
{
  printf("\n\nMENU\n");
  printf("1.Traverse\n");
  printf("2.Insertion\n");
  printf("3.Deletion\n");
  printf("4.Search\n");
  printf("5.Sort\n");
  printf("6.Exit\n");
  printf("\nEnter your choice");
  scanf("%d",&choice);
  switch(choice)
  {
  case 1: traverse(a);
    break;
  case 2:
             printf("Enter position and item value");
             scanf("%d%d",&pos,&item);
             insert(a,pos,item);
    break;void create(int a[])
{
    int i;
    printf("Enter array limit");
    scanf("%d",&N);

    printf("Enter array element\n");
    for(i=0;i<N;i++)
    scanf("%d",&a[i]);

}
  case 3: printf("Deletion");
    break;
  case 4: printf("Search");
    break;
  case 5: printf("Sort");
    break;
  case 6: exit(1);
    break;

  }
  }
return 0;
}


void create(int a[])
{
    int i;
    printf("Enter array limit");
    scanf("%d",&N);

    printf("Enter array element\n");
    for(i=0;i<N;i++)
    scanf("%d",&a[i]);

}
void traverse(int a[])
{
    int i;
   printf("Array elements are --->\n");
    for(i=0;i<N;i++)
    printf("\t%d",a[i]);

}
void insert(int a[] , int pos,int item)
{
    int i;
    if(pos<0 || pos>N-1)
    {
        printf("Incorrect Position");
        return;
    }
    for(i=N-1;i<=pos-1;i--)
        a[i+1]=a[i];
    a[pos-1]=item;
    N=N+1;

    }


}
}
