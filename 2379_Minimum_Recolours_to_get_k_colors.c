int minimumRecolors(char* blocks, int k) {
    int l=strlen(blocks);
    int cw=0;
    int i;
    while(i<k)
    {
        if(blocks[i]=='W')
        {
            cw++;
        }
        i++;
    }
    int res=cw;
    for(i=k;i<l;i++)
    {
        if(blocks[i-k]=='W')
        {
            cw--;
        }
        if(blocks[i]=='W')
        {
            cw++;
        }
        if(cw<res)
        {
            res=cw;
        }

    }
    return res;
}
