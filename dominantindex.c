#include<stdio.h>
int dominantIndex(int*,int);
int main()
{
    int a[9]={1,8,6,2,5,4,8,3,7};
    int max_index = dominantIndex(a,(sizeof(a)/sizeof(int)));
    printf("The maximum dominant index is:%d\n",max_index);
    return 0;
}

int dominantIndex(int* nums, int numsSize){
    int max=nums[0],maxIndex;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i] >= max)
        {
            max = nums[i];
            maxIndex = i;
        }
    }
    for(int i=0;i<numsSize;i++)
    {
        if((2 * nums[i] > max) && nums[i]!=max)
        {
            return -1;
        }
    }
return maxIndex;
}