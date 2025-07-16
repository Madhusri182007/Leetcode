int minSubArrayLen(int target, int* nums, int numsSize) {
    int min_len=numsSize+1;
    int i=0,j=0,sum=0;
    while(i<numsSize)
    {
        sum=sum+nums[i];
        while(sum>=target)
        {
            if(i-j+1<min_len)
            {
                min_len=i-j+1;
               
            }
            sum=sum-nums[j];
            j++;
        }
        i++;
    }
    return min_len==numsSize+1?0:min_len;
}
