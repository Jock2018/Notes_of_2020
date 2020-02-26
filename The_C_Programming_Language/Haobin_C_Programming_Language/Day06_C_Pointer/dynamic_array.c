/*
    时间：2020年2月26日21:15:46
    动态数组的构造
*/

# include <stdio.h>
# include <malloc.h>

int main(void)
{
    int a[5];  // 如果int 占4个字节的话，则本数组总共包含有20个字节，每四个字节被当做了一个int变量来使用
    int len;
    int * pArr;
    int i;

    printf("请输入你要存放元素的个数：");
    scanf("%d", &len);  // 
    pArr = (int *)malloc(4 * len);  // 本行动态的构造了一个一维数组，该数组的长度是len，该数组的数组名是pArr，该数组的每个元素是int 整型。类似于 int pArr[len];
    
    // 对一维数组进行操作， 如：对一维数组进行赋值
    for (i=0; i<len; ++i)
        scanf("%d", &pArr[i]);
    
    // 对一维数组进行输出
    printf("一维数组的内容是：\n");
    for (i=0; i<len; ++i)
        printf("%d\n", pArr[i]);

    free(pArr);  // 释放掉动态分配的数组
    
    return 0;
}