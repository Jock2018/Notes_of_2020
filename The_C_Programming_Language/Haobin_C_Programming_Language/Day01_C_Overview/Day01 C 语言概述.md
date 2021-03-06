> 这篇笔记主要内容是 C 语言概述，包括 C 语言特点、应用领域、学习方法等。阅读本文大概需要 5 分钟。​

## 1. 为什么学习 C 语言

### 1.1 C 语言的起源和发展

机器语言-->汇编语言-->结构化语言-->面向对象语言。
编程语言的发展是不断抽象，不断跟人类习惯相适应的过程。

### 1.2 C 语言的特点

【**优点**】

1. 代码量小；
2. 速度快；
3. 功能强大。

【**缺点**】

1. 危险性高；
2. 开发周期比较长；
3. 可移植性不强。

### 1.3 C 语言的重要性

现在的工业语言基本都是基于 C 语言衍变而来，所以了解 C 语言是有必要的。

### 1.4 C 语言的应用领域

很多底层系统都是用 C 语言。

## 2. 怎么样学习 C 语言

【**途径**】
多思考，多上机。

## 3. 学习的目标

能看懂程序，能调试程序，自学能力要很强。

## 4. 常见问题答疑

### 4.1 学习 Java 为什么建议先学习 C 语言

Java 很多语法都是继承自 C 语言，尤其是引用就是继承 C 语言的指针。

### 4.2 没有学习过计算机专业课程能够学懂 C 语言

没问题。

### 4.3 英语和数学不好能学好 C 吗？

英语不好没有问题，不过英语好，可以帮助你成为优秀的程序员，毕竟英语是交流的工具。
数学知识对于大部分的程序员高中学的已经足够，专家级别，数学还是需要涉猎的。

## 5. 课程计划

跟着视频理论+实践

## 6. 举例子：一元二次方程

```c
# include <stdio.h>
# include <math.h>

int main(void)
{
    // 把三个系数保存到计算机中
    int a = 1; // =不表示相等，表示赋值
    int b = 5;
    int c = 6;
    float delta; // delta存放的是b*b - 4*a*c
    float x1; // 存放一元二次方程的一个解
    float x2; // 存放一元二次方程的一个解

    delta = b*b - 4*a*c;

    if (delta > 0)
    {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        printf("该一元二次方程有两个解，x1 = %f, x2 = %f\n", x1, x2);
    }
    else if (delta == 0)
    {
        x1 = (-b ) / (2*a);
        x2 = x1; // 右边赋值给左边
        printf("该一元二次方程有一个唯一解，x1 = x2 = %f, x2 = %f\n", x1);
    }
    else
    {
        printf("该一元二次方程无解\n");
    }


    return 0;
}
```

【**说明**】

1. 本学习笔记整理自 B 站郝斌老师的[《郝斌 C 语言自学教程》片段 P1-P13](https://www.bilibili.com/video/av8074534?p=1)。

2. 笔记中所有代码均在 windows10 操作系统，在 VSCode 编辑器中通过测试。具体 VSCode C 语言开发环境搭建方法请参照我的另一篇 CSDN 博客——[Windows10 下利用 Visual Studio Code 搭建 C 语言开发环境](https://blog.csdn.net/qq_27283619/article/details/103648264)。
