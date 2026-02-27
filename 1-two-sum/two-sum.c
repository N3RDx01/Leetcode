int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* ans = (int*)malloc(2 * sizeof(int));
    
    for(int i = 1; i < numsSize; i++) {
        for(int j = i; j < numsSize; j++) {
            if(nums[j] + nums[j - i] == target) {
                ans[0] = j - i;
                ans[1] = j;
                *returnSize = 2;
                return ans;
            }
        }
    }
    
    *returnSize = 0;
    free(ans); 
    return NULL;
}