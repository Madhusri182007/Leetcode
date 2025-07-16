int threeSumClosest(int* nums, int numsSize, int target) {
    int compare(const void *a,const void *b)
    {
        return *(int *)a-*(int *)b;
    }
    qsort(nums,numsSize,sizeof(int),compare);
    int close=nums[0]+nums[1]+nums[2];
    for(int i=0;i<numsSize-2;i++)
    {
        int left=i+1;
        int right=numsSize-1;
        while(left<right)
        {
            int sum=nums[i]+nums[left]+nums[right];
            if(abs(target-sum)<abs(target-close))
            {
                close=sum;
            }
            if(sum<target)
            {
                left++;
            }
            else if(sum>target)
            {
                right--;
            }
            else{
                return sum;
            }
        }
    }
    return close;
}
