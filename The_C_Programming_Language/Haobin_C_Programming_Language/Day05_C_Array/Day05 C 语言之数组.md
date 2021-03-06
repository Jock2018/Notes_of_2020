> 这篇笔记主要是介绍 C 语言中的数组，包括一维数组，二维数组和多维数组等。阅读本文预计需要 ６ 分钟。

## 数组概述

### 为什么需要数组

1. 为了解决大量`同类型数据`的存储问题。

2. 为了模拟现实世界。

例 数组的用法

```c
/*
    时间：2020年2月22日10:11:19
    目的：
        数组使用展示
*/

# include <stdio.h>

int main(void)
{
    int a[5] = {1, 2, 3, 4, 5};
        // a是数组的名字，5表示数组元素的个数，并且这5个元素分别用a[0], a[1], a[2], a[3], a[4]表示
    int i;

    for (i=0; i<5; ++i)
        printf("%d\n", a[i]);

    printf("%d\n", a[100]);  // 访问到了垃圾数据

    return 0;
}

/*
    在VSCode中的输出结果是：
--------------------------
1
2
3
4
5
0
--------------------------
*/
```

### 数组的不足

语言层次的数组限制比较多，功能有限。比如：要实现一个数组倒置，还需要去从头开始编写，十分不方便。对于现实世界的抽象，现在我们会更多的对数组进行整合，集成工具，方便我们直接调用。

### 数组的分类

数组是对我们现实的抽象，数组分为`一维数组`、`二维数组`和`多维数组`。

## 一维数组

### 一维数组的定义

格式：\
　　数据类型 数组名[数组元素个数];\
举例：\
　　 int a[5];\
解释：\
　　定义了一个名为 `a` 的数组，`a` 数组有且只有 5 个元素，并且每个元素的数据类型是 `int`。注意：`一维数组名不代表数组中所有的元素，一维数组名代表数组第一个元素的地址`。数组 a 有 a[0], a[1], a[2], a[3], a[4] 这 5 个元素。

### 数组定义的本质

1. 为 n 个变量`连续分配`操作空间。

2. 所有的变量数据类型必须相同。

3. 所有变量所占的字节大小必须相同。

### 有关一维数组的操作

**完全初始化**\
　　 int a[5] = {1, 2, 3, 4, 5};

**不完全初始化，未被初始化元素自动为 0**\
　　 int a[5] = {1, 2, 3};

**不初始化，所有元素是垃圾值**\
　　 int a[5];

**清零**\
　　 int a[5] = {0}

**错误示例 1**\
　　 int a[5];\
　　 a[5] = {1, 2, 3, 4, 5};\
解释：只有在定义数组的同时才可以整体赋值，其他情况整体赋值都是错误的。这里 a[5] 表示的是数组 a 的第 6 个元素，明显超出了定义的范围，所以错误。 a 数组最多取到 a[4]，即第 5 个元素。

**错误示例 2**\
　　 int a[5] = {1, 2, 3, 4, 5};\
　　 a[5] = 100;\
解释：错误, 因为没有数组 a 没有 a[5] 这个元素，最多是 a[4]

**错误示例 3**\
功能：实现把 a 数组中的值全部复制给 b 数组。\
错误的写法\
　　 int a[5] = {1, 2, 3, 4, 5};\
　　 int b[5];\
　　 b = a; // error\
正确的写法：\
　　 for (i=0; i<5; ++i)\
　　　　 b[i] = a[i];

**其他一些操作**\
对于数组的赋值、排序、求最大/最小值、倒置、查找、插入、删除等操作，留作自己了解。

例 一维数组的倒置

```c
/*
    时间：2020年2月22日10:25:30
    功能：
        一维数组倒置
*/

# include <stdio.h>

int main(void)
{
    int a[7] = {1, 2, 3, 4, 5, 6, 7};
    int i, j;
    int t;

    printf("倒置前数组是：");
    for (i=0; i<7; ++i)
    {
         printf("%d  ", a[i]);
    }
    printf("\n");


    i = 0;
    j=6;
    while (i<j)
    {
        t = a[i];
        a[i] = a[j];
        a[j] = t;

        i++;  // ++i
        --j;  // j--
    }

    printf("倒置后数组是：");
    for (i=0; i<7; ++i)
    {
         printf("%d  ", a[i]);
    }
    printf("\n");

    return 0;
}

/*
    在VSCode中的输出结果是：
--------------------------
倒置前数组是：1  2  3  4  5  6  7
倒置后数组是：7  6  5  4  3  2  1
--------------------------
*/
```

### 二维数组

### 二维数组的定义

格式：\
　　数据类型 数组名[m][n];\
举例：\
　　 int a[3][4];\
解释：\
　　定义了一个名为 `a` 的数组，`a` 数组有且只有 3\*4=12 个元素，并且每个元素的数据类型是 `int`。注意：数组 a 总共是 12 个元素，可以当做 3 行 4 列看待，这 12 个元素的名字依次是：

|         |         |         |         |
| ------- | ------- | ------- | ------- |
| a[0][0] | a[0][1] | a[0][2] | a[0][3] |
| a[1][0] | a[1][1] | a[1][2] | a[1][3] |
| a[2][0] | a[2][1] | a[2][2] | a[2][3] |

`a[i][j]` 表示第 `i+1` 行第 `j+1` 列的元素。\
`int a[m][n];` 该二维数组右下角位置的元素最多只能是 `a[m-1][n-1]`.

### 二维数组的初始化

方式一相对没有那么直观，不太推荐。\
　　 int a[3][4] = {1, 2, 3, 4, 5, 6, , 8, 9, 10, 11, 12};\

方式二推荐：

```c
    int a[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
```

### 二维数组的操作

二维数组的操作包括：输出二维数组内容、对二维数组排序、求每一行的最大值、判断矩阵是否对称、矩阵的相乘等

例 输出二维数组内容

```c
/*
    时间：2020年2月22日10:40:20
    目的：
        输出二维数组内容
    总结：
        1. 输出二维数组内容需要用到两层循环
*/

#include <stdio.h>

int main(void)
{
    int a[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int i, j;

    // 输出数组内容
    for (i=0; i<3; ++i)
    {
        for (j=0; j<4; ++j)
        {
            printf("%-5d",a[i][j]);  // %-5d 表示左对齐，每个数占用5个字节
        }
        printf("\n");
    }

    return 0;
}

/*
    在VSCode中的输出结果是：
--------------------------
1    2    3    4
5    6    7    8
9    10   11   12
--------------------------
*/
```

### 多维数组

实际上是不存在多维数组的，因为在计算机硬件中，内存是线性一维的。

所以 `n 维数组可以当做每个元素是 n-1 维数组的一维数组`。

比如：\
　　`int a[3][4];`\
该数组是含有 3 个元素的一维数组，只不过每个元素可以再分成 4 个小元素。\
　　`int a[3][4][5];`\
该数组是含有 3 个元素的一维数组，只不过每个元素都是 4 行 5 列的二维数组。

【**说明**】

1. 本学习笔记整理自 B 站郝斌老师的[《郝斌 C 语言自学教程》片段 P97-P103](https://www.bilibili.com/video/av8074534?p=97)。

2. 笔记中所有代码均在 windows10 操作系统，在 VSCode 编辑器中通过测试。具体 VSCode C 语言开发环境搭建方法请参照我的另一篇 CSDN 博客——[Windows10 下利用 Visual Studio Code 搭建 C 语言开发环境](https://blog.csdn.net/qq_27283619/article/details/103648264)。

## 后记

如果对你有所帮助，欢迎关注我的这个公众号或者点个在看。这个公众号主要是慢慢分享和记录自己学习编程的笔记，比如：C，Python，Java 等。后续也会分享自己面试以及在职场上的成长心得。

![在这里插入图片描述](https://img-blog.csdnimg.cn/20200220230253314.jpg)
