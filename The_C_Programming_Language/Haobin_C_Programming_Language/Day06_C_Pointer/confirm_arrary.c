/*
    时间：2020年2月24日16:07:26
    功能：
        XXX
    总结：
        1. XXX
*/

# include <stdio.h>

// f函数可以输出任何一个一维数组的内容
void f(int * pArr, int len)
{
    int i;

    for (i=0; i<len; ++i)
        printf("%d ", *(pArr+i));  // *pArr *(pArr+1) *(pArr+2)
    printf("\n");
}

int main(void)
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[6] = {-1, -2, -3, 4, 5, -6};
    int c[100] = {1, 99, 22, 33};

    f(a, 5);  // a 是 int *的地址
    f(b, 6);
    f(c, 100);

    return 0;
}

/*
    在VSCode中的输出结果是：
--------------------------

--------------------------
*/