int largestAltitude(int* gain, int gainSize) {
    int arr[gainSize];
    for(int i=0;i<gainSize;i++)
    {
        if(i==0)
        {
            arr[0]=gain[0]+0;
        }
        else
        {
            arr[i]=arr[i-1]+gain[i];
        }
    }
    int max=arr[0];
    for(int i=0;i<gainSize;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    if(max<0)
    {
        return 0;
    }
    return max;
}
