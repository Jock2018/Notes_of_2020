/*
    时间：2020年2月24日14:30:31
    功能：
        XXX
    总结：
        1. XXX
*/

# include <stdio.h>

int main(void)
{
    int i = 5;
    int * p;
    int * q;

    p = &i;
    // *q = p;  // error 语法编译会出错
    // *q = *p;  // VSCode中输出 5 
    p = q;  // q 是垃圾值，q 赋给 p, p 也变成垃圾值
    printf("%d\n", *q);  // 21行
        /*
             q 的空间是属于本程序的，所以本程序可以读写 q 的内容，
             但是如果 q 内部是垃圾值，则本程序不能读写 *p 的内容。
             因为 *q 所代表的内存单元的控制权限并没有分配给本程序。
        */
    return 0;
}

/*
    在VSCode中的输出结果是：
--------------------------

--------------------------
*/