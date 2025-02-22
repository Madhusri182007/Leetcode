int differenceOfSum(int* nums, int numsSize) {
    int r,e_sum=0,d_sum=0;
    for(int i=0;i<numsSize;i++)
    {
        e_sum=e_sum+nums[i];
    }
    for(int i=0;i<numsSize;i++)
    {
        while(nums[i]!=0)
        {
            r=nums[i]%10;
            d_sum=d_sum+r;
            nums[i]=nums[i]/10;
        }
    }
    int diff;
    diff=e_sum-d_sum;
    return diff;
}
