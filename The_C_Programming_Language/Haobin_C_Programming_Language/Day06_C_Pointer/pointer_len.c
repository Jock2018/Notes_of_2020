/*
    时间：2020年2月24日17:30:10
    功能：
        XXX
    总结：
        1. XXX
*/

# include <stdio.h>

int main(void)
{
    char ch = 'A';
    int i = 99;
    double x = 66.6;
    char * p = &ch;
    int * q = &i;
    double * r = &x;

    printf("%d %d %d\n", sizeof(p), sizeof(q), sizeof(r)); 

    return 0;
}

/*
    在VSCode中的输出结果是：
--------------------------
8 8 8
--------------------------
*/