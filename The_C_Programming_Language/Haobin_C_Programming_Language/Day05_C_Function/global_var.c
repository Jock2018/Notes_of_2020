/*
    时间：2020年2月24日12:53:29
    一定要明白该程序为什么是错的，
    把 11 和 12 行代码放到16行后面，为什么程序就 OK 了
*/

# include <stdio.h>

void g()  // 11
{
    printf("k = %d\n", k);
}  // 12

int k = 1000;  // 16

void f(void)
{
    g();
    printf("k = %d\n", k);
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