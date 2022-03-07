#include<stdio.h>
int findIndex(int*,int);
int main()
{
    int a[3]={3,1,3};
    int pivot = findIndex(a,(sizeof(a)/sizeof(int)));
    printf("The pivot index is :%d\n",pivot);
    return 0;
}

int findIndex(int *a,int n)
{
    int i,sum=0,leftsum=0;
    for(i=0;i<n;i++)
    {
        sum += a[i];
    }

    for(i = 0;i<n;i++)
    {
        if(leftsum == sum-leftsum-a[i])
        {
            return i;
        }
        leftsum += a[i];
    }
    return -1;
}