# include <stdio.h>

int main(void)
{
    int i = 12;

    printf("i = %d\n", i);
    printf("i = %x\n", i);
    printf("i = %X\n", i);
    printf("i = %o\n", i);  
     
    /*
        printf的用法
        %d表示以十进制输出
        %x或者%X表示以十六进制输出,x和X的区别在于大小写表示
        %o表示以八进制输出
    */

    return 0;
}