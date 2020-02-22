/*
    时间：2020年2月19日 17：57
    目的：
        测试if...else if...else的用法
    总结：
        1. 注意if...else if ...else必须成对出现
        2. 警惕if...else if...else的作用范围导致的错误
*/

# include <stdio.h>

int main(void)
{
    double delta = 3;

    if (delta > 0)
        printf("有两个解！\n");
        // printf("哈哈！\n");  // 加了这句会报错，导致后面的else if语法错误
    else if (delta == 0)
        printf("有一个唯一解！\n");
    else
        printf("无解！\n");

    return 0;
}

/*
    在VSCode中的输出结果是：
--------------------------
有两个解！
--------------------------
*/