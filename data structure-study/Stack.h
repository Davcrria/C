#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int ElementType;

typedef struct linknode
{
    ElementType data;
    struct linknode* next;
}LinkStNode;

void InitList(LinkStNode*& s)
{
    s = (LinkStNode*)malloc(sizeof(LinkStNode));
    s->next = NULL;
}

void DestroyList(LinkStNode*& s)
{
    LinkStNode* p = s->next, * pre = s;
    while (p != NULL)
    {
        s = p;
        p = p->next;
        
    }
    free(s);
}