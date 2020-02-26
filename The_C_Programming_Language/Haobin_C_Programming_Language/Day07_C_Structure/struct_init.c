/*
    时间：2020年2月25日14:14:46
*/

# include <stdio.h>

// 第一种方式
struct Student
{
    int age;
    float score;
    char sex;
};

int main(void)
{
    struct Student st = {80, 66.6, 'F'};  // 初始化  定义的同时赋初值
    struct Student st2;
    st2.age = 10;
    st2.score = 88;
    st2.sex = 'F';

    printf("%d %f %c\n", st.age, st.score, st.sex);
    printf("%d %f %c\n", st2.age, st2.score, st2.sex);

    return 0;
}

/*
    在VSCode中的输出结果是：
--------------------------

--------------------------
*/