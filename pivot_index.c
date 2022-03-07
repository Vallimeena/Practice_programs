#include<stdio.h>
int sum(int*,int,int);
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
    for(int pivot=0;pivot < n;pivot++)
    {
        printf("pivot:%d\n",pivot);
        int lsum = sum(a,0,pivot);
        int rsum = sum(a,pivot+1,n);
        printf("%d %d\n",lsum,rsum);
        if(lsum == rsum)
        {
            return pivot;
        }
    }
    return -1;
}

int sum(int *a,int start,int end)
{
    int i;
    if(end <= start)
    {
        return 0;
    }
    return a[end-1]+sum(a,start,end-1);
}