bool containsDuplicate(int* nums, int numsSize) {
   
    int t=0;
    for(int i=0;i<=numsSize-2;i++)
    {
        for(int j=i+1;j<=numsSize-1;j++)
        {
            if(nums[i]==nums[j])
            {
                t++;
            }
        }
    }
    if(t!=0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
