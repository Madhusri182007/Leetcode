int arraySign(int* nums, int numsSize) {
     int p=1;
    for(int i=0;i<numsSize;i++)
    {
        p=p*nums[i];
        if(p<0)
        {
            p=-1;
        }
        if(p>0)
        {
            p=1;
        }
    }
    if(p<0)
    {
        return -1;
    }
    else if(p==0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
