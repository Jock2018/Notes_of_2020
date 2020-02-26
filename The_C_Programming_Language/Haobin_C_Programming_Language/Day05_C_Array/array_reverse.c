/*
    时间：2020年2月22日10:25:30
    功能：
        一维数组倒置
*/

# include <stdio.h>

int main(void)
{
    int a[7] = {1, 2, 3, 4, 5, 6, 7};
    int i, j;
    int t;

    printf("倒置前数组是：");
    for (i=0; i<7; ++i)
    {
         printf("%d  ", a[i]);
    }
    printf("\n");
       

    i = 0;
    j=6;
    while (i<j)
    {
        t = a[i];
        a[i] = a[j];
        a[j] = t;

        i++;  // ++i
        --j;  // j--
    }

    printf("倒置后数组是：");
    for (i=0; i<7; ++i)
    {
         printf("%d  ", a[i]);
    }
    printf("\n");
       
    return 0;
}

/*
    在VSCode中的输出结果是：
--------------------------
倒置前数组是：1  2  3  4  5  6  7  
倒置后数组是：7  6  5  4  3  2  1  
--------------------------
*/