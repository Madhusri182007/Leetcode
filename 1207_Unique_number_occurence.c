bool uniqueOccurrences(int* arr, int arrSize) {
    int res[1000];
    int c=1,k=0;
    for(int i=0;i<arrSize;i++)
    {
        c=1;
        if(arr[i]!=-999)
        {
        for(int j=i+1;j<arrSize;j++)
        {
            if(arr[i]==arr[j])
            {
                arr[j]=-999;
                c++;
            }
        }
        res[k++]=c;
        }
    }
    int s=0,sum=0;
    for(int i=0;i<k-1;i++)
    {
          for(int j=i+1;j<k;j++)
          {
                if(res[i]==res[j])
                {
                   return false;
                }
          }
       
    }
    if(s==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
