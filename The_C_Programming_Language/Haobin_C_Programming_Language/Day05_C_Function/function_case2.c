/*
    时间：2020年2月22日14:41:19
    功能：
        XXX
    总结：
        1. XXX
*/

# include <stdio.h>

int f(void)  // 括号中的 void 表示该函数不能接收数据  int 表示函数返回值是 int 类型
{
    return 10;  // 向主调函数返回 10 
}

void g(void)  // 函数名前面的 void 表示该函数没有返回值
{
    // return 10;  // error 与 void 声明矛盾
}

int main(void)
{
    int j= 88;

    j = f();
    printf("%d\n", j);

    return 0;
}

/*
    在VSCode中的输出结果是：
--------------------------
10
--------------------------
*/