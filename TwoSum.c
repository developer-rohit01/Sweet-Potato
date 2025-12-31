#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target) {
    // Allocate memory for the result array (2 integers)
    int* result = (int*)malloc(2 * sizeof(int));
    
    // Simple brute-force approach (O(n^2)) – works for small arrays
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    
    // In case no solution found (though problem guarantees one solution)
    free(result);
    return NULL;
}

int main() {
    int nums[] = {11, 7, 2, 15};
    
    int target = 20;
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    
    int* indices = twoSum(nums, numsSize, target);
    if (indices != NULL) {
        printf("Indices: [%d, %d]\n", indices[0], indices[1]);
        free(indices); // Caller frees the allocated memory
    }
    else{
        printf("No combination found");
    }
    return 0;
}

    
