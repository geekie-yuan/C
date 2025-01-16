#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Your original function
int* plusOne(int* digits, int digitsSize, int* returnSize){
    int num = 0;
    for(int i = 0; i < digitsSize; i++){
        num += digits[i] * pow(10,digitsSize-1-i);
    }
    int target = num + 1;
    int target_bc = target;
    int count = 1;
    while(target / 10 > 0) {
        target = target / 10;
        count++;
    }
    target = target_bc;
    returnSize = &count;
    int* result = (int*)malloc((count) * sizeof(int));
    for(int i = count; i >-1; i--){
         result[i-1] = target % 10;
        target = target / 10;
    }
    return result;
}

// Test function
void runTest(int* input, int size) {
    printf("\n=== Running Test ===\n");
    printf("Input array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", input[i]);
    }
    printf("\n");

    int returnSize;
    int* result = plusOne(input, size, &returnSize);

    printf("Output array: ");
    for(int i = 0; i < returnSize; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    free(result);
}

int main() {
    // Test Case 1: Simple case
    int test1[] = {1, 2, 3};
    printf("\nTest Case 1:");
    runTest(test1, 3);

    // Test Case 2: Number ending in 9
    int test2[] = {9, 9};
    printf("\nTest Case 2:");
    runTest(test2, 2);

    // Test Case 3: Single digit
    int test3[] = {5};
    printf("\nTest Case 3:");
    runTest(test3, 1);

    return 0;
}