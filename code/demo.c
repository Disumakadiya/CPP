#include<stdio.h>
#define size 6

void insert(int a[],int n)
{
    printf("enter the %d elements",n);
    for (int i =0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}

void displayarray(int a[];int n)
{
    for (int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
}

void deleteelement(int a[],int *n,int j)
{
    if(j<0||j>=*n)
       {
          printf("error");
       }
    else
    {
        for(int i=j;i<n*-1;i++)
        {
            a[i]=a[i+1];
        }
        (*n)--;
    }
}

int search(int a[],int n;int value)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==value)
        {
            return i;
        }
    }
    return -1;
}

int sort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

int main()
{
    int a[size],n=size;
    insert(a,n);
    displayarray(a,n);

    deleteelement(a,&n,1);
    displayarray(a,n);
    printf("index no:4%d \n",search(a,n,4));

sort(a,n);
displayarray(a,n);

return 0;
}
