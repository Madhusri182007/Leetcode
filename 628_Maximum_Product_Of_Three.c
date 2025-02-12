int maximumProduct(int* nums, int numsSize) {
    int P=1,t=0;
    if(3<=numsSize<=10000)
    {
    for(int i=0;i<numsSize;i++)
    {
       if(nums[i]<=1000 && nums[i]>=-1000)
       {
t++;
       }
    }
    if(t== numsSize)
    {
        for(int i=0;i<numsSize;i++)
        {
             P=P*nums[i];
        }
         return P;
    }
    }
    return 0;
}
