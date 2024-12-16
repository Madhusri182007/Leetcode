int lengthOfLastWord(char* s) {
    int i=0,length=0,last=0;;
    while(s[i]!='\0')
    {
        if(s[i]==32)
        {
            if(length!=0)
            {
            last=length;
            }
            length=0;
        }
        else
        {
            length++;
        }
        i++;
    }
    if(length!=0)
    {
       last=length;
    }
    return last;
    
}
