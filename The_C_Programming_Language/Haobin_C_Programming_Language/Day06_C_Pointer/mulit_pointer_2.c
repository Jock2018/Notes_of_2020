/*
    时间：2020年2月25日10:21:14

*/

# include <stdio.h>

void f(int ** q)
{
    // *q就是p
}

void g()
{
    int i = 10;
    int * p = &i;  // 类型 int *

    f(&p); // p是int * 类型，&p是int **类型
}

int main(void)
{
    g();
   
    return 0;
}

/*
    在VSCode中的输出结果是：
--------------------------

--------------------------
*/