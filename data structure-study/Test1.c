#include"SeqList.h"

void TestSeqList1()
{
    SL sl;
    SeqListInit(&sl);
    SeqListPushBack(&sl, 1);
    SeqListPushBack(&sl, 3);
    SeqListPushBack(&sl, 2);
    SeqListPushBack(&sl, 4);
    SeqListPushBack(&sl, 5);

    /* SeqListPopBack(&sl);
    SeqListPopBack(&sl);
    SeqListPopBack(&sl);
    SeqListPopBack(&sl);
    SeqListPopBack(&sl);
    SeqListPopBack(&sl);
    SeqListPopBack(&sl);
    
    SeqListPushBack(&sl, 1);
    SeqListPushBack(&sl, 2); */

    SeqListPrint(&sl);
    printf("\n");
    SeqListInsert(&sl, 1, 6);
    SeqListPrint(&sl);
    printf("\n");
    SeqListErase(&sl, 2);
    SeqListPrint(&sl);
    printf("\n");
    printf("%d", SeqListFind(&sl, 2));
}

void TestSeqList2()
{
    SL sl;
    SeqListInit(&sl);
    SeqListPushBack(&sl, 1);
    SeqListPushBack(&sl, 2);
    SeqListPushBack(&sl, 3);
    SeqListPushBack(&sl, 4);
    SeqListPrint(&sl);

    /* SeqListPushFront(&sl, 10);
    SeqListPushFront(&sl, 20);
    SeqListPushFront(&sl, 30);
    SeqListPushFront(&sl, 40);
    SeqListPrint(&sl); */

    SeqListPopFront(&sl);
    SeqListPopFront(&sl);
    SeqListPopFront(&sl);
    //SeqListPopFront(&sl);
    //SeqListPopFront(&sl);
    SeqListPrint(&sl);
}

int main()
{
    TestSeqList1();
    //TestSeqList2();
    return 0;
}