
#include <stdio.h>
#include <stdlib.h>

int*twoSum(int*nums, int numsSize, int target, int*returnSize){
    *returnSize = 2;
    int* result = (int*)malloc(2*sizeof(int));


    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i+1; j<numsSize; j++){
            if(nums[i]+nums[j] == target){
                result[0]=i;
                result[1]=j;
                return result;
            }
        }
    }
    return NULL;
}


int main(){
    int nums[] = {2, 5, 7, 8, 23};
    int target = 25;

    int returnSize;

    int*result = twoSum(nums, 4, target, &returnSize);

    if(result){
        printf("[%d, %d]\n", result[0], result[1]);
        free(result);
    }
    return 0;
}