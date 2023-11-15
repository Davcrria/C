#include<stdio.h>
#include<stdlib.h>

typedef int SLDatatype;

typedef struct SListNode
{
    SLDatatype data;
    struct SLTNode *next;
}SLTNode;

void SListInit(SLTNode **phead)
{
    *phead = NULL;
}

void SListDestroy(SLTNode **phead)
{
    SLTNode *p = *phead;
    while(p != NULL)
    {
        *phead = (SLTNode *)p->next;
        free(p);
        p = *phead;
    }
}

void SListPrint(SLTNode *phead)
{
    SLTNode *p = phead;
    while(p != NULL)
    {
        printf("%d ",p->data);
        p = (SLTNode *)p->next;
    }
    printf("\n");
}

void SListPushBack(SLTNode **phead, SLDatatype x)
{
    //创建新节点
    SLTNode *newNode = (SLTNode *)malloc(sizeof(SLTNode));
    newNode->data = x;
    newNode->next = NULL;

    if(*phead == NULL)
    {
        *phead = newNode;
    }
    else
    {
        //找到尾节点
        SLTNode *tail = *phead;
        while(tail->next != NULL)
        {
            tail = (SLTNode *)tail->next;
        }
        tail->next = (struct SLTNode *)newNode;
    }
}

void ListLength(SLTNode *phead)
{
    SLTNode *p = phead;
    int count = 0;
    while(p != NULL)
    {
        count++;
        p = (SLTNode *)p->next;
    }
    printf("ListLength = %d\n",count);
}

void GetElem(SLTNode *phead, int i, SLDatatype *x)
{
    SLTNode *p = phead;
    for(int j = 0; j < i - 1; j++)
    {
        p = (SLTNode *)p->next;
    }
    *x = p->data;
}

void LocateElem(SLTNode *phead, SLDatatype x)
{
    SLTNode *p = phead;
    int i = 1;
    while(p != NULL)
    {
        if(p->data == x)
        {
            printf("LocateElem = %d\n",i);
        }
        i++;
        p = (SLTNode *)p->next;
    }

}

void ListInsert(SLTNode **phead, int i, SLDatatype x)
{
    SLTNode *p1 = *phead, *p2 = *phead;
    //创建新节点
    SLTNode *newNode = (SLTNode *)malloc(sizeof(SLTNode));
    newNode->data = x;
    if(i == 1)
    {
        newNode->next = (struct SLTNode *)p1;
        *phead = newNode;
    }
    else
    {
        for(int j = 1; j < i - 1; j++)
        {
            p1 = (SLTNode *)p1->next;
        }
        for(int j = 1; j < i; j++)
        {
            p2 = (SLTNode *)p2->next;
        }
        p1->next = (struct SLTNode *)newNode;
        newNode->next = (struct SLTNode *)p2;
    }   
}

void ListDelete(SLTNode **phead, int i, SLDatatype *x)
{
    SLTNode *p1 = *phead, *p2 = *phead;
    if(i == 1)
    {
        *x = p1->data;
        *phead = (SLTNode *)p1->next;
        free(p1);
    }
    else
    {
        for(int j = 1; j < i - 1; j++)
        {
            p1 = (SLTNode *)p1->next;
        }
        for(int j = 1; j < i; j++)
        {
            p2 = (SLTNode *)p2->next;
        }
        *x = p2->data;
        p1->next = p2->next;
        free(p2);
    }
}

void ReverseList(SLTNode **phead)
{
    SLTNode *p = *phead, *q = NULL, *r = NULL;
    while(p != NULL)
    {
        r = q;
        q = p;
        p = (SLTNode *)p->next;
        q->next = (struct SLTNode *)r;
    }
    *phead = q;
}

struct SLTNode *CombineList(SLTNode **phead1, SLTNode **phead2)
{
    SLTNode *p1 = *phead1, *p2 = *phead2;
    SLTNode Node;
    SLTNode *tail = &Node;
    while (p1 != NULL && p2 != NULL) 
    {
        if (p1->data <= p2->data) 
        {
            tail->next = (struct SLTNode *)p1;
            p1 = (SLTNode *)p1->next;
        } else 
        {
            tail->next = (struct SLTNode *)p2;
            p2 = (SLTNode *)p2->next;
        }
        tail = (SLTNode *)tail->next;
    }

    // 将剩余的节点直接加入合并后的链表
    if (p1 != NULL) 
    {
        tail->next = (struct SLTNode *)p1;
    } 
    else 
    {
        tail->next = (struct SLTNode *)p2;
    }
    return Node.next;
}