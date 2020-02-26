/*
    时间：2020年2月24日21:01:11
*/

# include <stdio.h>
# include <malloc.h>


void f(int * q)
{
    // *p = 200;  // error
    // q = 200;  
    // **q = 200;  // error
    *q = 200;
    // free(q);  // 把q所指向的内存释放掉  本语句必须注释掉，否则会导致 25 行代码出错
}

int main(void)
{
    int * p = (int *)malloc(sizeof(int));  // sizeof(int)返回值是int所占的字节数
    *p = 10;

    printf("%d\n", *p);  // 10
    f(p);  // p是 int * 类型
    printf("%d\n", *p);  // 200

    return 0;
}

/*
    在VSCode中的输出结果是：
--------------------------

--------------------------
*/