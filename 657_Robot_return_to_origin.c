bool judgeCircle(char* moves) {
    int i=0,u=0,d=0,l=0,r=0;
    while(moves[i]!='\0')
    {
        if(moves[i]=='U')
        {
            u++;
        }
        if(moves[i]=='D')
        {
            d++;
        }
        if(moves[i]=='L')
        {
            l++;
        }
        if(moves[i]=='R')
        {
            r++;
        }
        i++;
    }
    if(u==d && l==r)
    {
        return true;
    }
    else
    {
        return false;
    }
}
