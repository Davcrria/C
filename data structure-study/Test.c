<<<<<<< HEAD
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
    SeqListInsert(&sl, 1, 6);
    printf("%d", SeqListFind(&sl, 3));
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
=======
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
    SeqListInsert(&sl, 1, 6);
    printf("%d", SeqListFind(&sl, 3));
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
>>>>>>> 51b3f90d4cf16019ba266f4926c2a1924c9e0729
}