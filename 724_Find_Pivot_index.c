int pivotIndex(int* nums, int numsSize) {
    int right=0;
    for(int i=0;i<numsSize;i++)
    {
        right=right+nums[i];
    }
    int left=0;
    for(int i=0;i<numsSize;i++)
    {
        right=right-nums[i];
        if(left==right)
        {
            return i;
        }
        left=left+nums[i];
    }
    return -1;
}
