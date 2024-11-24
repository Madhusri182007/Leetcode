int romanToInt(char* s) {
    int i=0;
    int arr[20];
    int C=0;
    while(*(s+i)!='\0')
    {
        C++;
        switch(*(s+i))
        {
            case 'I':
            {
                arr[i]=1;
                break;
            }
            case 'V':
            {
                arr[i]=5;
                break;
            }
            case 'X':
            {
                arr[i]=10;
                break;
            }
            case 'L':
            {
                arr[i]=50;
                break;
            }
            case 'C':
            {
                arr[i]=100;
                break;
            }
            case 'D':
            {
                arr[i]=500;
                break;
            }
            case 'M':
            {
                arr[i]=1000;
                break;
            }
        }i++;
    }
    int j=0;
    int Sum=0;
    for(j=0;j<C;j++)
    {
        if((j+1)!=C && arr[j]<arr[j+1])
        {
            arr[j+1]=arr[j+1]-arr[j];
            j++;
        }
        Sum=Sum+arr[j];
    }
    return Sum;   
}
