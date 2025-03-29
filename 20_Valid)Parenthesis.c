bool isValid(char* s) {
    int len =strlen(s);
    char str[len];
    int index= -1;
    for(int i=0;i<len;i++)
    {
        if(s[i]=='(' || s[i] == '{' || s[i] == '[' )
        {
            str[++index] = s[i];
        }
        else
        {
            if(index== -1 ||( s[i]==')'&&str[index] != '(')||(s[i]=='}'&&str[index] != '{')||(s[i]==']'&&str[index]!='['))
            {
                return false;
            } 
            index--;
        } 
    }  
    return index== -1; 
}
