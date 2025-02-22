char* toLowerCase(char* s) {
    int l=strlen(s);
    for(int i=0;i<l;i++)
    {
        if( (int)s[i]>=65 && (int)s[i]<=90)
        {
            s[i]=(char)((int)(s[i])+32);
        }
    }
    return s;
}
