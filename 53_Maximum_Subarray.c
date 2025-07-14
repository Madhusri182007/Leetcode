int maxSubArray(int* nums, int numsSize){
    
    int maxSum = nums[0];
    int max_Curr = 0;
    for(int i = 0; i < numsSize; i++){
        max_Curr += nums[i];
        if(maxSum < max_Curr){
            maxSum = max_Curr;
        }
        if(max_Curr < 0){
            max_Curr = 0;
        }
    }
    return maxSum;     
}
