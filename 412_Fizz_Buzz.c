/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    *returnSize=n;
    char **t=(char**)malloc(sizeof(char*)*n);
    for(int i=0;i<n;i++)
    {
          if((i+1)%15==0)
       {
        t[i]="FizzBuzz";
       }
        else if((i+1)%3==0 ) 
        {
            t[i]="Fizz";
        }
       
       else if((i+1)%5==0)
       {
        t[i]="Buzz";
       }
      
        else
        {
             char b[10];
           sprintf(b,"%d",i+1);
           t[i]=strdup(b);
        }
    }
    return t;
}
