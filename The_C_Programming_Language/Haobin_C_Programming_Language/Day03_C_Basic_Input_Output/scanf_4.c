# include <stdio.h>

int main(void)
{
    int i;

    printf("请输入一个数：");
    scanf("%d\n", &i);  // 非常不好的格式，不要加 \n
    printf("%d\n", i);

    return 0;
}