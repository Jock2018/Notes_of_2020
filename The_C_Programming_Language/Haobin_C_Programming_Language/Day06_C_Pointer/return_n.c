/*
    时间：2020年2月24日15:42:14
    功能：
        XXX
    总结：
        1. XXX
*/

# include <stdio.h>

f(int i, int j)
{
    return 100;
}

void g(int * p, int *q)
{
    *p = 1;
    *q = 2;
}

int main(void)
{
    int a = 3;
    int b = 5;

    a = f(a, b);
    b = f(a, b);

    return 0;
}

/*
    在VSCode中的输出结果是：
--------------------------

--------------------------
*/