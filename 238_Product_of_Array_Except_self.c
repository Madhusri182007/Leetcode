/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
   
    int* answer=(int*)malloc(numsSize*sizeof(int));
     *returnSize=numsSize;
    int j=0,p=1;
    for(int i=0;i<numsSize;i++)
    {
        answer[i]=p;
        p=p*nums[i];
    }
    p=1;
    for(int i=numsSize-1;i>=0;i--)
    {
        answer[i]=answer[i]*p;
        p=p*nums[i];
    }
    return answer;
}
