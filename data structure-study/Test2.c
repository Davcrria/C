#include "SeqList2.h"

void TestSList1()
{
    int e;
    SLTNode *plist1, *plist2;
    SListInit(&plist2);
    SListInit(&plist1);
    SListPushBack(&plist1, 1);
    SListPushBack(&plist1, 3);
    SListPushBack(&plist1, 5);
    ListInsert(&plist1, 4, 7);
    SListPushBack(&plist2, 2);
    SListPushBack(&plist2, 4);
    SListPushBack(&plist2, 6);
    SListPushBack(&plist2, 8);
    SListPrint(plist1);
    SListPrint(plist2);
    SLTNode *p = (SLTNode *)CombineList(&plist1, &plist2);
    SListPrint(p);
    SListDestroy(&plist1);
}

int main()
{
    TestSList1();
    return 0;
}