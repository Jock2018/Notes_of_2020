/*
    时间：2020年2月25日14:21:48
    获取结构体的成员
*/

# include <stdio.h>


// 第一种方式  这只是定义了一个新的数据类型，并没有定义变量
struct Student
{
    int age;
    float score;
    char sex;
};

int main(void)
{
    struct Student st = {80, 66.6, 'F'};  // 初始化  定义的同时赋初值
    struct Student * pst = &st;  // &st不能改成st

    pst->age = 88;  // 第二种方式
    st.score = 66.6f;  // 第一种方式  66.6在C 语言中默认是double类型，如果希望一个实数是float类型，则必须在末尾加f或F，因此66.6是double类型，66.f或66.F是float类型
    
    printf("%d %f\n", st.age, pst->score);

    return 0;
}

/*
    在VSCode中的输出结果是：
--------------------------
88 66.599998
--------------------------
*/