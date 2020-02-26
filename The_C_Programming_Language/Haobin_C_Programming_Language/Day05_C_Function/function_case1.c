/*
    时间：2020年2月22日14:01:19
    功能：
        函数的作用演示
    总结：
        1. 函数可以实现功能复用，减少代码量
*/

# include <stdio.h>

// max 是函数名字，i 和 j 是形式参数，简称形参 void 表示函数没有返回值。
void max(int i, int j)
{
    if (i > j)
        printf("%d\n", i);
    else
        printf("%d\n", j);
    
}

int main(void)
{
    int a, b, c, d, e, f;

    a = 1, b = 2, c = 3, d = 9, e = -5, f = 100;  // 不推荐这么写
    max(a, b);
    max(c, d);
    max(e, f);
/*
    if (a > b)
        printf("%d\n", a);
    else
        printf("%d\n", b);
    
    if (c > d)
        printf("%d\n", c);
    else
        printf("%d\n", d);

    if (e > f)
        printf("%d\n", e);
    else
        printf("%d\n", f);
*/

    return 0;
}

/*
    在VSCode中的输出结果是：
--------------------------
2
9
100
--------------------------
*/