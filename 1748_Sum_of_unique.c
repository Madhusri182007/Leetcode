int sumOfUnique(int* nums, int numsSize) {
    int sum=0,a,c;
    for(int i=0;i<numsSize;i++)
    {
         a=nums[i];
         c=0;
        for(int j=0;j<numsSize;j++)
        {
            if(a==nums[j])
            {
                c++;
            }
        }
        if(c==1)
        {
        sum=sum+nums[i];
        }
    }
    return sum;
}
