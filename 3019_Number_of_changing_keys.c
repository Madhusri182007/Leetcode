int countKeyChanges(char* s) {
 int count=0,l=strlen(s);
 for(int i=0;i<l-1;i++)
 {
    if(s[i]==s[i+1])
    {
        continue;
    }
    else if(s[i]>='A' && s[i]<='Z' && s[i+1]==s[i]+32)
    {
        continue;
    }
    else if(s[i]>='a' && s[i]<='z' && s[i+1]==s[i]-32)
    {
        continue;
    }
    else
    {
        count++;
    }
 }  
 return count; 
}
