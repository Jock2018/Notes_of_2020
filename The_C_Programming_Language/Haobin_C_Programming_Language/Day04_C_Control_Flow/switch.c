/*
    时间：2020年2月20日15:13:55
    功能：
        测试switch的用法，电梯程序
    总结：
        1. switch就是找程序的入口，找到后就顺序执行剩余的代码。
*/

# include <stdio.h>

int main(void)
{
    int val;

    printf("请输入您要进入的楼层：");
    scanf("%d", &val);

    switch (val)
    {
        case 1:
            printf("1层开！\n");
            // break;
        case 2:
            printf("2层开！\n");
            // break;
       case 3:
            printf("3层开！\n");
            // break;
        default:
            printf("还没有盖到这一层！\n");
    }

    return 0;
}

/*
    在VSCode中的输出结果是：
--------------------------
请输入您要进入的楼层：1
1层开！
2层开！
3层开！
还没有盖到这一层！
--------------------------
*/