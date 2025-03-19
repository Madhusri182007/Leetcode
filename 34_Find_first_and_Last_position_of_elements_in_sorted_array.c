int* searchRange(int* nums, int numsSize, int target, int* returnSize)
{
    int* arr=malloc(sizeof(int)*2);
    int a=-1,b=-1;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]==target)
        {
            a=i;
            break;
        }
    }
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]==target)
        {
            b=i;
        }
    }
    if(a!=-1 && b!=-1)
    {
    arr[0]=a;
    arr[1]=b;
    *returnSize=2;
    return arr;
    }
    else
    {
        arr[0]=a;
        arr[1]=b;
        *returnSize=2;
        return arr;
    }
}
