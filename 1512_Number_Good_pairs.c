int numIdenticalPairs(int* nums, int numsSize) {
    int C=0;
    for(int i=0;i<=numsSize-2;i++)
    {
        for(int j=i+1;j<=numsSize-1;j++)
        {
            if(nums[i]==nums[j] && i<j)
            {
                C++;
            }
        }
    }
    return C;
}
