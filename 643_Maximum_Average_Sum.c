double findMaxAverage(int* nums, int numsSize, int k) {
    double max=0;
    for(int i=0;i<k;i++)
    {
        max=max+nums[i];
    }
    int sum=max;
    for(int i=k;i<numsSize;i++)
    {
        sum=sum+nums[i]-nums[i-k];
        if(max<sum)
        {
            max=sum;
        }
    }
    max=max/k;
    return max;
}
