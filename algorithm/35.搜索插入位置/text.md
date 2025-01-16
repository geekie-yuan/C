```
给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不存在于数组中，返回它将会被按顺序插入的位置。

请必须使用时间复杂度为 O(log n) 的算法。


示例 1:

输入: nums = [1,3,5,6], target = 5
输出: 2
示例 2:

输入: nums = [1,3,5,6], target = 2
输出: 1
示例 3:

输入: nums = [1,3,5,6], target = 7
输出: 4
 

提示:

1 <= nums.length <= 104
-104 <= nums[i] <= 104
nums 为 无重复元素 的 升序 排列数组
-104 <= target <= 104
```
# 3.1.25
想到要找这个数组中的目标值，就可以遍历这个数组，然后每一层遍历进行比较，相同则返回；如果数组中没有这个值的话，就要返回这个数插入的位置。 那么就可以比较，如果遍历的数大于这个数，就返回遍历的层数。
``` c
int searchInsert(int* nums, int numsSize, int target) {
    for(int i = 0; i < numsSize; i++){
        if(nums[i] == target >= nums[i] > target){
            return i;
            break;
        }
    }
    return numsSize;
}
```
看了下Copilt的优化，还可以用二分法优化时间复杂度
``` c
int searchInsert(int* nums, int numsSize, int target) {
    int left = 0, right = numsSize - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return left;
}
```