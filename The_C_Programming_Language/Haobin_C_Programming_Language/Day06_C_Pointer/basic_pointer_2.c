/*
    时间：2020年2月24日15:23:48
    功能：
        XXX
    总结：
        1. XXX
*/

# include <stdio.h>

void swap_1(int i, int j)
{
    int t;
    t = i;
    i = j;
    j = t;
    return;
}

void swap_2(int * p, int * q)  // 形参名字是 p 和 q，接收实参数据的是 p 和 q
{
    int t;
    t = *p;
    *p = *q;
    *q = t;
}

int main(void)
{
    int a = 3;
    int b = 5;

    // swap_1(a, b);
    swap_2(&a, &b);
    printf("a = %d, b = %d\n", a, b);

    return 0;
}

/*
    在VSCode中的输出结果是：
--------------------------

--------------------------
*/