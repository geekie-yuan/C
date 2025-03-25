# 13. 罗马数字转整数

罗马数字包含以下七种字符: I， V， X， L，C，D 和 M。

| 字符 | 数值 |
| ---- | ---- |
| I    | 1    |
| V    | 5    |
| X    | 10   |
| L    | 50   |
| C    | 100  |
| D    | 500  |
| M    | 1000 |

例如， 罗马数字 2 写做 II ，即为两个并列的 1。 12 写做 XII ，即为 X + II 。 27 写做 XXVII, 即为 XX + V + II 。

通常情况下，罗马数字中小的数字在大的数字的右边。但也存在特例，例如 4 不写做 IIII，而是 IV。数字 1 在数字 5 的左边，所表示的数字等于大数 5 减小数 1 得到的数值 4。同样地，数字 9 表示为 IX。这个特殊的规则只适用于以下六种情况：

- I 可以放在 V (5) 和 X (10) 的左边，来表示 4 和 9。
- X 可以放在 L (50) 和 C (100) 的左边，来表示 40 和 90。 
- C 可以放在 D (500) 和 M (1000) 的左边，来表示 400 和 900。

给定一个罗马数字，将其转换成整数。

### 示例 1:

输入: s = "III"  
输出: 3

### 示例 2:

输入: s = "IV"  
输出: 4

## First Try
> 特殊情况：
* IV = 4 = 5 - 1
* IX = 9 = 10 - 1
* XL = 40 = 50 - 10 
* XC = 90 = 100 - 10
* CD = 400 = 500 - 100
* CM = 900 = 1000 - 100

先不考虑特殊情况，可以将所有的罗马数字用递归的方法相加，然后再处理特殊情况。

~~~ c
int romanToInt(char* s) {
    //不考虑6总特殊情况
    int sum =0;
    switch(*(s++)){
        case 'I':
            sum= romanToInt(s) + 1;
            break;
        case 'V':
            sum = romanToInt(s) + 5;
            break;
        case 'X':
            sum = romanToInt(s) + 10;
            break;
        case 'L':
            sum = romanToInt(s) + 50;
            break;
        case 'C':
            sum = romanToInt(s) + 100;
            break;
        case 'D':
            sum = romanToInt(s) + 500;
            break;
        case 'M':
            sum = romanToInt(s) + 1000;
            break;
        default:
            return 0; 
    }
    return sum;
}
~~~

### 遗忘的知识点
在字符串递增的地方出现了错误
* `s` 是一个指针，指向字符串的首个地址
* `s+1` 是指向字符串的第二个地址
* `*(s+1)` 是字符串的第二个字符
* `*(s++)` 是取出字符串的第一个字符，然后指针指向第二个字符
* `(*s)++` 是取出字符串的第一个字符，然后对字符进行自增操作
* `*s++` 是取出字符串的第一个字符，然后指针指向第二个字符
* `(*s)++` 是取出字符串的第一个字符，然后对字符进行自增操作

~~~ c
int romanToInt(char* s) {
    int sum =0;
    switch(*(s++)){
        case 'I':
            sum= romanToInt(s) + 1;
            break;
        case 'V':
        	if(romanToInt(s) > *s)  //if里面的调用改变了sum的值
            	sum = romanToInt(s) + 5;
            else
            	sum = romanToInt(s) + 5 - 2;
            break;
        case 'X':
        	if(romanToInt(s) > *s)
            sum = romanToInt(s) + 10;
            else
            sum = romanToInt(s) + 10 - 2;
            break;
        case 'L':
        	if(romanToInt(s) > *s)
            sum = romanToInt(s) + 50;
            else
            sum = romanToInt(s) + 50 - 20;
            break;
        case 'C':
        	if(romanToInt(s) > *s)
            sum = romanToInt(s) + 100;
            else
            sum = romanToInt(s) + 100 - 20;
            break;
        case 'D':
        	if(romanToInt(s) > *s)
            sum = romanToInt(s) + 500;
            else
            sum = romanToInt(s) + 500 - 200;
            break;
        case 'M':
        	if(romanToInt(s) > *s)
            sum = romanToInt(s) + 1000;
            else
            sum = romanToInt(s) + 1000 - 200;
            break;
        default:
            return 0; 
    }
    return sum;
}
~~~
思路没错,但是在if判断里面的递归又改变了sum的值.