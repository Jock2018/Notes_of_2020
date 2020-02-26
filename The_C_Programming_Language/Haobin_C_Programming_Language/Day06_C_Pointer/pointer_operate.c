/*
    时间：2020年2月24日16:57:27
    指针的运算
*/

# include <stdio.h>

int main(void)
{
    int i = 5; 
    int j = 10;
    int * p = &i;
    int * q = &j;
    int a[5];
    p = &a[1];
    q = &a[4];
    printf("p和q所指向的单元相隔%d个单元\n", q-p);

    // p-q 没有实际意义

    return 0;
}

/*
    在VSCode中的输出结果是：
--------------------------
p和q所指向的单元相隔3个单元
--------------------------
*/