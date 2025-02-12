void moveZeroes(int* nums, int numsSize) {
    int a[numsSize];
    int j=0;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]!=0)
        {
            a[j]=nums[i];
            j++;
        }
    }
    while(j<numsSize)
    {
        a[j]=0;
        j++;
    }
    for(int i=0;i<numsSize;i++)
    {
        nums[i]=a[i];
    }
}
