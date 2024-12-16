int missingNumber(int* nums, int numsSize) {
   int sum=0,s=0;
   for(int i=0;i<numsSize;i++)
   {
    sum=nums[i]+sum;
   }

   for(int i=0;i<=numsSize;i++)
   {
    s=s+i;
   }
   int c=s-sum;
   return c;
}
