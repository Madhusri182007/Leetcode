bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
    int l=flowerbedSize;
    if(flowerbedSize==1)
    {
        if(flowerbed[0]==0 && n==0)
        {
            return true;
        }
       else  if(flowerbed[0]==1 && n==0)
        {
            return true;
        }
       else  if(flowerbed[0]==0 && n==1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }   
    int c=0;
    if(flowerbed[0]==0 && flowerbed[1]==0)
    {
        flowerbed[0]=1;
        c++;
    }
      if(flowerbed[l-1]==0 && flowerbed[l-2]==0)
    {
        flowerbed[l-1]=1;
        c++;
    }
    
        for(int i=1;i<l-1;i++)
        {
            if(flowerbed[i]==0 && flowerbed[i+1]==0 && flowerbed[i-1]==0)
            {
                flowerbed[i]=1;
                c++;
                i++;
            }
        }

    if(c>=n)
    {
        return true;
    }
    else
    {
        return false;
    }
}
