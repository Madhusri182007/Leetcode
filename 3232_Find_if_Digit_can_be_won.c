bool canAliceWin(int* nums, int numsSize) {
    int s=0,s1=0;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]%10 == nums[i])
        {
            s=s+nums[i];
        }
        else if(nums[i]/10 !=0)
        {
            s1=s1+nums[i];
        }
    }
    if(s>s1)
    {
        return true;
    }
    else if(s1>s)
    {
        return true;
    }
    else
    {
        return false;
    }
}
