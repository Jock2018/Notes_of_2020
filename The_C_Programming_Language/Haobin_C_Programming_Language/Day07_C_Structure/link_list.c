/*
    时间：2020年2月25日21:06:52
*/

# include <stdio.h>

// 定义一个链表数据类型
struct Node
{
    int data;
    struct Node * pNext;
};

int main(void)
{
    struct Node *pHead;  // pHead用来存放链表头节点的地址
    
    pHead = CreateList();
    TraverseList(pHead);

    return 0;
}

/*
    在VSCode中的输出结果是：
--------------------------

--------------------------
*/