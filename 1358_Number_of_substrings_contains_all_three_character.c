int numberOfSubstrings(char* s) {
    int arr[3]={-1,-1,-1};
     long long int c=0;
    int l=strlen(s);
    for(int i=0;i<l;i++)
    {
        if(s[i]=='a')
        {
            arr[0]=i;
        }
        if(s[i]=='b')
        {
            arr[1]=i;
        }
        if(s[i]=='c')
        {
            arr[2]=i;
        }
        int min=arr[0];
        if(arr[1]<min)
        {
            min=arr[1];
        }
        if(arr[2]<min)
        {
            min=arr[2];
        }
        if(min !=-1)
        {
            c+=min+1;
        }
    }
    return c;
}  
