# C to C++
## 头文件

    * `#include<iostream>`输入输出流  
    * 其他头文件去掉.h在头部+c ，例如`include<cstring>`
    * `using namespace std`名称空间,防止不同库相同的函数名字  

## 输入输出

    * `cin` 相当于 `scanf`  `cin >> n;`  
    * `cout` 相当于 `printf` 
        * `cin` `cout`的效率没有`scanf`跟`printf`高 
    * `endl` == `/n`

    * `#define` 常量可以直接用`const`代替(宏定义)

## 字符串
    * 拼接只需要相加
    * `cin``cout`输入输出
    * `getline(cin,s)`可以打印整行字符串
    * `.length()`求长度
    * `.substr(n,m)` 提取从n到m的字符
* 结构体

* 引用&传值
    * 约等于指正

## STL
* vector
    * 头文件`#include<vector>`
    * `vector <int> v(m,n)`数组分配m个空间,每个空间为n
    * `v.resize(length)`
    * `v.push_back(data)` 数组尾部插入数据

### 迭代器(iteractor)

迭代器是一个变量，相当于容器和操纵容器的算法之间的中介。迭代器可以指向容器中的某个元素，通过迭代器就可以读写它指向的元素。

    ~~~c
    for(auto p = v.begin(); p! = v.end(); P++){
        cout << *p <<" ";
    }
    ~~~

### set
set为集合,里面元素各部相同,且会向从小到大排序
    * `s.insert(data)`插入
    * `s.find(data)`查找
        * 返回值为指针
    * `s.erase(data)`删除

### map
map用于存储键值对
    * `map <Key_Type , Value_Type> map_name`
        * `Key_Type`是键的类型
        * `Value_Type`是值的类型

### stack
stack
    * `include<stack>`
    * `stack <int> s`;
    * `s.push(i)` 进栈
    * `m.pop()` 出栈
    * `s.top` 访问栈顶
    * `m.size()` 获取长度

### queue
queue
    * `#include<queue>` 
    * `queue <int> s`
    * `s.push(i)` 入队 
    * `s.pop` 出队
    * `s.front()` 队首
    * `s.back()` 队尾
    * `s.size()` 获取长度

### unordered_map 和 unordered_set
让map键值对和set集合不排序，省去排序的时间
    * `include<unordered_map>`
    * `include<unordered_set>`
    * `unoredered_map <string, int> m`
    * `unoredered_set <int> a`

## 




