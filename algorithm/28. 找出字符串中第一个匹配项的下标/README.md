# 28. 找出字符串中第一个匹配项的下标

给你两个字符串 `haystack` 和 `needle` ，请你在 `haystack` 字符串中找出 `needle` 字符串的第一个匹配项的下标（下标从 0 开始）。如果 `needle` 不是 `haystack` 的一部分，则返回 `-1`。

### 示例 1：
输入：haystack = "sadbutsad", needle = "sad"  
输出：0  
解释：  
"sad" 在下标 0 和 6 处匹配。  
第一个匹配项的下标是 0，所以返回 0。

### 示例 2：
输入：haystack = "leetcode", needle = "leeto"  
输出：-1  
解释：  
"leeto" 没有在 "leetcode" 中出现，所以返回 -1。

## First Try
两个字符串，说白了就是比较一个字符串是不是在另外一个字符串里面，如果在就返回第一个位子。先假设一下第一个字符串永远比第二个字符串长的情况。
可以利用一种类似于Buble Sort的方法，将第一个字符串的一个值依次与第二个字符串的值进行比较，如果都匹配则返回

~~~ c
int strStr(char* haystack, char* needle) {
    int count1, count2 = 0;
    char* p = haystack;
    char* q = needle;
    while(*haystack != '\0'){
        count1++;
    }
    while(*needle != '\0'){
        count2++;
    }
    for(char* haystack = p ; p < p+count1; p++){
        for(; q < q+count2; q++){
            if(*haystack==*q){
                haystack++;
            if else
                continue;
            }
        }
        if(haystack++)
        return p;
    }
}
~~~

没写出来，两层判断太复杂，而且操作了原始指针，使问题更复杂了


## 应该具备的思想
~~~ c
int strStr(char* haystack, char* needle) {
    if (!*needle) return 0; // 如果 needle 是空字符串，返回 0

    int n = strlen(haystack), m = strlen(needle);
    if (m > n) return -1; // 如果 needle 比 haystack 长，直接返回 -1

    for (int i = 0; i <= n - m; i++) {
        int j = 0;
        while (j < m && haystack[i + j] == needle[j]) {
            j++;
        }
        if (j == m) return i; // 找到匹配项，返回起始下标
    }
    return -1; // 未找到匹配项
}
~~~
* 利用 `str[i]`，`str[j]` 判断条件，而不是直接利用指针
* i代表一层 j代表一层
