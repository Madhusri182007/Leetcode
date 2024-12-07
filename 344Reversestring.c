void reverseString(char* s, int sSize) {
    int i,j;
    j=sSize-1;
    i=0;
    char a;
    while(i<j)
    {
       a=s[i];
       s[i]=s[j];
       s[j]=a;
       i++;
       j--;
    }
}
