/*
    时间：2020年2月22日10:23:31
    功能：
        XXX
    总结：
        1. XXX
*/

# include <stdio.h>

int main(void)
{
    int a[5];
    int i;

    scanf("%d", &a[0]);
    printf("a[0] = %d\n", a[0]);

    scanf("%d", &a[3]);
    printf("a[3] = %d\n", a[3]);

    for (i=0; i<5; ++i)
        printf("%d\n", a[i]);

    return 0;
}

/*
    在VSCode中的输出结果是：
--------------------------
1
a[0] = 1
2
a[3] = 2
1
0
115
2
--------------------------
*/