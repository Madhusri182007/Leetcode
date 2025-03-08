char* reverseVowels(char* s) {
    int l=strlen(s),c=0;
     for(int i=0;i<l;i++)
    {
        if(s[i]=='A' || s[i]=='a' || s[i]=='E' || s[i]=='e' || s[i]=='I' || s[i]=='i' ||s[i]=='O' ||s[i]=='o' ||s    [i]=='U' ||s[i]=='u')
        {
            c++;
        }
    }
    if(c==0)
    {
        return s;
    }
    char vow[c+1];
    int j=0,arr[c];
    for(int i=0;i<l;i++)
    {
        if(s[i]=='A' || s[i]=='a' || s[i]=='E' || s[i]=='e' || s[i]=='I' || s[i]=='i' ||s[i]=='O' ||s[i]=='o' || s[i]=='U' ||s[i]=='u')
        {
            vow[j]=s[i];
            arr[j]=i;
            j++;
        }
    }
    vow[j]='\0';
    char revvow[c+1];
    int k=c-1,i;
    for( i=0;i<c;i++)
    {
       revvow[i]=vow[k];
       k--;
    }
    revvow[i]='\0';
    j=0;
    for (int i = 0; i < c; i++) {
        s[arr[i]] = revvow[i]; 
    }
    return s;
}
