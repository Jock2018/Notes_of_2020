/*
    时间：2020年2月24日21:45:22
    多级指针的示例
*/

# include <stdio.h>

int main(void)
{
    int i = 10;
    int * p = &i;
    int ** q = &p;
    int *** r = &q;

    // r = &p;  // error 因为 r 是 int *** 类型，r只能存放int ** 类型的变量的地址
    printf("%d\n", ***r);
    printf("%d\n", **q);
    printf("%d\n", *p);

    return 0;
}

/*
    在VSCode中的输出结果是：
--------------------------
10
10
10
--------------------------
*/