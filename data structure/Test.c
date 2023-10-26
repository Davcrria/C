#include "SeqList.h"

void TestSeqList1()
{
    SL sl;
    ElemType a=1;
    ElemType *e=&a;
    InitList(&sl);
    ListEmpty(&sl);
    SeqListPushBack(&sl, 1);
    SeqListPushBack(&sl, 2);
    SeqListPushBack(&sl, 3);
    ListLength(&sl);
    SeqListPushBack(&sl, 4);
    SeqListPushBack(&sl, 5);
    ListLength(&sl);
    GetElem(&sl, 3, e);
    printf("%d\n", *e);
    ListEmpty(&sl);
    DispList(&sl);
    Destory(&sl);
}

int main()
{
    TestSeqList1();
    return 0;
}