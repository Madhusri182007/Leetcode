int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    for(int i=0;i<numsSize;i++)
    {
        if (nums[i]<0)
        {
            nums[i]=-(nums[i]);
        }
    }
    for(int i=0;i<=numsSize-2;i++)
    {
        for(int j=i+1;j<=numsSize-1;j++)
        {
            if(nums[i]>nums[j])
            {
                int t=nums[i];
                nums[i]=nums[j];
                nums[j]=t;
            }
        }
    }
    int *a=(int*)malloc(numsSize*sizeof(int));
    for(int i=0;i<numsSize;i++)
    {
        *(a+i)=nums[i]*nums[i];
    }
    *returnSize=numsSize;
    return a;
}
