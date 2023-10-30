#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;

typedef struct Node 
{
    ElementType data;
    struct Node* next;
} Node;

Node* createNode(ElementType data) 
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) 
    {
        printf("内存分配失败\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

ElementType findMiddleElement(Node* head) 
{
    Node* slow = head->next;
    Node* fast = head->next;

    while (fast != NULL && fast->next != NULL) 
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow->data;
}

void freeList(Node* head) 
{
    Node* current = head;
    while (current != NULL) 
    {
        Node* next = current->next;
        free(current);
        current = next;
    }
}

int main() 
{
    Node* head = createNode(-1);  // 头结点

    // 构建示例链表
    Node* node1 = createNode(1);
    Node* node2 = createNode(2);
    Node* node3 = createNode(3);
    Node* node4 = createNode(4);
    Node* node5 = createNode(5);

    head->next = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;

    // 求解链表的中间位置元素
    ElementType middleElement = findMiddleElement(head);
    printf("中间位置元素为: %d\n", middleElement);

    // 释放链表内存
    freeList(head);

    return 0;
}