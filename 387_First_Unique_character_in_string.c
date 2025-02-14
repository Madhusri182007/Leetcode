int firstUniqChar(char* s)
{
    int t=0;
    int l=strlen(s);
    for(int i=0;i<l;i++)
    {
        t=0;
        for(int j=0;j<l;j++)
        {
            if(s[i]==s[j] && i!=j)
            {
                t=1;
                break;
            }
        }
        if(t==0)
        {
            return i;
        }
    }
    return -1;
}
