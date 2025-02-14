int* numberGame(int* nums, int numsSize, int* returnSize) {
    int t;
    for(int i=0;i<=numsSize-2;i++)
    {
        for(int j=i+1;j<=numsSize-1;j++)
        {
            if(nums[i]>nums[j])
            {
                t=nums[i];
                nums[i]=nums[j];
                nums[j]=t;
            }
        }
    }
   int *arr=(int*)malloc(numsSize*sizeof(int));
   *returnSize=numsSize;
    int j=0;
    for(int i=1;i<=numsSize;i+=2)
    {
        arr[j++]=nums[i];  
        arr[j++]=nums[i-1];
    }
    return arr;
}
