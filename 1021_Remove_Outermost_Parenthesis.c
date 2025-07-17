char* removeOuterParentheses(char* s) {
int i=0,j=0,l=0,c=0;
int len=(strlen(s));
char *res=(char*)calloc(1,len);
for(int j=0;j<len;j++)
{
    if(s[j]=='(')
    {
        c++;
    }
    if(s[j]==')')
    {
        c--;
    }
    if(c==0)
    {
        for(int k=i+1;k<j;k++)
        {
            res[l++]=s[k];
        }
        i=j+1;
    }
}
return res;
}
