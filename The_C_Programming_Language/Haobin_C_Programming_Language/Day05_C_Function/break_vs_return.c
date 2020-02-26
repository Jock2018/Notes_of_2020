/*
    时间：2020年2月22日15:31:31
    功能：
        break VS return
    总结：
        break 终止循环和 switch，return 终止函数。
*/

# include <stdio.h>

void f(void)
{
    int i;

    for (i=0; i<5; ++i)
    {
        printf("大家辛苦了！\n");
        // break;  // 终止循环
        return;  // 终止函数
    }
    printf("同志们好！\n");
}

int main(void)
{
    f();

    return 0;
}

/*
    break 时在VSCode中的输出结果是：
--------------------------
大家辛苦了！
同志们好！
--------------------------

    return 时在VSCode中的输出结果是：
--------------------------
大家辛苦了！
--------------------------
*/