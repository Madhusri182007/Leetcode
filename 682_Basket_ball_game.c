int calPoints(char** operations, int operationsSize) {
    int *res=(int *)malloc(sizeof(int)*operationsSize);
    int s=0,l=0;
    for(int i=0;i<operationsSize;i++)
    {
        if(strcmp(operations[i],"C")==0)
         {
            res[l-1]=0;
            l--;
        }
        else if(strcmp(operations[i],"D")==0)
        {
            res[l++]=res[l-1]*2;
        }
        else if(strcmp(operations[i],"+")==0)
        {
            res[l++]=res[l-1]+res[l-2];
        }
        else
        {
           
            res[l++]=atoi(operations[i]);
        }
    }
    for(int i=0;i<l;i++)
    {
        s+=res[i];
    }
    return s;
}
