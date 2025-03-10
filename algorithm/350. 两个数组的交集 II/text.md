```
给定两个整数数组，输出两数组的交集。注意：要考虑出现的顺序，如果不同则考虑较小者。
示例 1：

输入：nums1 = [1,2,2,1], nums2 = [2,2]
输出：[2,2]
示例 2:

输入：nums1 = [4,9,5], nums2 = [9,4,9,8,4]
输出：[4,9]
```
看到要输出两个数组的交集，可以让数量小的数组递归匹配大的数组，如果一致，则输出；不一致，则据徐搜寻。
~~~ c
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int max = (nums1Size > nums2Size) ? nums1Size:nums2Size;
    int* return_arr = (int*)malloc(max * sizeof(int));
    int k = 0;
    for(int i = 0; i < nums1Size; i++){
        for(int j = 0; j < nums2Size; j++){
            if(nums1[i] == nums2[j]){
                return_arr[k] = nums1[i];
                k++;
                break;
            }
        }
    }
        *returnSize = k;
        return return_arr;
}
~~~
代码部分错误，因为是通过第一个数组遍历得来的，如果遇到重复的数字则会出现两次。


