/*
    时间：2020年2月20日12:39:31
    目的：
        测试三目运算符
    总结：
        A ? B : C
        等价于
            if (A)
                B;
            else
                C;
*/

# include <stdio.h>

int main(void)
{
    int i;

    i = (3>2 ? 5 : 1);

    printf("i = %d\n", i);

    return 0;
}

/*
    在VSCode中的输出结果是：
--------------------------
i = 5
--------------------------
*/