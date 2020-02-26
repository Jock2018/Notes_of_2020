/*
    时间：2020年2月24日15:16:06
    功能：
        XXX
    总结：
        1. XXX
*/

# include <stdio.h>

int main(void)
{
    int * p;  // 等价于 int *p; 也等价于 int* p;
    int i = 5;
    char ch = 'A';

    p = &i;  // *p 是以 p 的内容为地址的变量
    *p == 99;
    printf("i = %d, *p = %d", i, *p);

    // p = &ch;
    // p = ch; // error
    // p = 5;  // error

    return 0;
}

/*
    在VSCode中的输出结果是：
--------------------------

--------------------------
*/