int arithmeticTriplets(int* nums, int numsSize, int diff) {
    int c=0;
    for(int i=0;i<numsSize-2;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            
        for(int k=j+1;k<numsSize;k++)
        {
            if((nums[j]-nums[i])==diff && (nums[k]-nums[j])==diff)
            {
                c++;
            }
        }

        }
    }
    return c;
}
