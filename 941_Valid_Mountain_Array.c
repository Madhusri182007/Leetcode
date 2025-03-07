bool validMountainArray(int* arr, int arrSize)
 {
    if (arrSize < 3)
    {
     return false;
    }
    int incre = 0, decre = 0;
    for (int i = 0; i < arrSize - 1; i++)
     {
        if (arr[i] < arr[i + 1] && decre == 0)
        {
            incre++;
        }
        if (arr[i] > arr[i + 1] && incre >= 1)
        {
            decre++;
        }
    }
    if (incre + decre == arrSize - 1 && incre != 0 && decre != 0) 
    {
        return true;
    }
    return false;
}
