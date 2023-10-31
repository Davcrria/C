#include "SeqList.h"

void TestSeqList1()
{
    SL sl;
    ElemType e;
    InitList(&sl);
    ListInsert(&sl, 1, 1);
    ListInsert(&sl, 2, 2);
    ListInsert(&sl, 3, 4);
    ListInsert(&sl, 4, 8);
    ListInsert(&sl, 5, 5);
    DispList(&sl);
    printf("\n");
    DeleteElem(&sl, 2, 3);
    DispList(&sl);
}

int main()
{
    TestSeqList1();
    return 0;
}