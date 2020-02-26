/*
    时间：2020年2月24日15:26:42
    功能：
        XXX
    总结：
        1. XXX
*/

# include <stdio.h>

void f(int i)
{
    i = 99;   
}

int main(void)
{
    int i = 6;
    printf("i = %d\n",i);
    f(i);
     printf("i = %d\n",i);

    return 0;
}

/*
    在VSCode中的输出结果是：
--------------------------

--------------------------
*/