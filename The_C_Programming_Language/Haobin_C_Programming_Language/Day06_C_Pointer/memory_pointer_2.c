/*
    时间：2020年2月25日10:53:36
    跨函数使用内存。
*/

# include <stdio.h>
# include <malloc.h>

void f(int **q)
{
    *q = (int*)malloc(sizeof(int));  // sizeof(数据类型) 返回值是该数据类型所占的字节数
            // 等价于 p = (int *)malloc(sizeof(int));
    // q = 5;  // error
    // *q = 5;  // 等价于 p = 5;
    **q = 5;  // 等价于 *p = 5;
}

int main(void)
{
    int * p;

    f(&p);
    printf("%d\n", *p);

    return 0;
}

/*
    在VSCode中的输出结果是：
--------------------------
5
--------------------------
*/