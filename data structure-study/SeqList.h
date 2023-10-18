<<<<<<< HEAD
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#define N 100 
typedef int SLDataType;//方便修改类型


//动态顺序表
typedef struct SeqList//简写SeqList
{
    SLDataType* a;
    int size;       //表示数组中储存了多少数据
    int capacity;   //表示数组实际能储存的空间有多大
}SL;

//顺序表的初始化
void SeqListInit(SL* p)
{
    p->a = NULL;
    p->capacity = p->size = 0;
}

//检查顺序表空间（capacity）容量，判断是否需要扩容
void SeqListCheckCapacity(SL* p)
{
    if(p->size == p->capacity)
    {
        //空间不足则扩容
        int newcapacity = p->capacity == 0 ? 4 : p->capacity*2;
        SLDataType* tmp = (SLDataType* )realloc(p->a, newcapacity*sizeof(SLDataType));
        if (tmp == NULL)
        {
            printf("relloc fail\n");
            exit(-1);
        }
        p->capacity = newcapacity;
        p->a = tmp;
    }    
}

//顺序表的尾插
void SeqListPushBack(SL* p, SLDataType x)
{
    SeqListCheckCapacity(p);//插入时先判断容量够不够再进行插入操作
    p->a[p->size] = x;
    p->size++;
}

//顺序表的打印
void SeqListPrint(SL* p)
{
    for(int i = 0;i < p->size;i++)
    {
        printf("%d \n", p->a[i]);
    }
}

//销毁顺序表
void SeqListDestory(SL* p)
{
    free(p->a);
    p->capacity = p->size = 0;
}

//顺序表尾删数据
void SeqListPopBack(SL* p)
{
    /* if(p->size > 0)
    {
        p->size--;
    } */
    assert(p->size > 0);//判断size的值是否大于零，防止size小于0，出现错误
    p->size--;
}

//顺序表头插数据
void SeqListPushFront(SL* p, SLDataType x)
{
    SeqListCheckCapacity(p);//插入时先判断容量够不够再进行插入操作
    //挪动数据
    int end = p->size - 1;
    while (end >= 0)
    {
        p->a[end+1] = p->a[end];
        --end;
    }
    p->a[0] = x;
    p->size++;
}

//头删数据表中的数据
void SeqListPopFront(SL* p)
{
    assert(p->size > 0);//判断size的值是否大于零，防止size小于0，出现错误
    //挪动数据
    int begin = 1;
    while (begin <= p->size-1)
    {
        p->a[begin - 1] = p->a[begin];
        ++begin;
    }
    p->size--;
}

//查找某一元素，找到了则返回x位置的下标
int SeqListFind(SL* p, SLDataType x)
{
    int i = 0;
    for(i;i <= p->size-1;i++)
    {
        if(p->a[i] == x)
        {
            return(i);
        }
    }
}

//在指定pos下标位置插入数据
void SeqListInsert(SL* p, int pos, SLDataType x)
{
    SeqListCheckCapacity(p);//插入时先判断容量够不够再进行插入操作
    int end = p->size;
    for(int i = 0;i < p->size-pos;i++)
    {
        p->a[end] = p->a[end-1];
        --end;
    }
    p->a[pos] = x;
}

//在指定pos下标位置删除数据
void SeqListErase(SL* p, int pos)
{

=======
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#define N 100 
typedef int SLDataType;//方便修改类型


//动态顺序表
typedef struct SeqList//简写SeqList
{
    SLDataType* a;
    int size;       //表示数组中储存了多少数据
    int capacity;   //表示数组实际能储存的空间有多大
}SL;

//顺序表的初始化
void SeqListInit(SL* p)
{
    p->a = NULL;
    p->capacity = p->size = 0;
}

//检查顺序表空间（capacity）容量，判断是否需要扩容
void SeqListCheckCapacity(SL* p)
{
    if(p->size == p->capacity)
    {
        //空间不足则扩容
        int newcapacity = p->capacity == 0 ? 4 : p->capacity*2;
        SLDataType* tmp = (SLDataType* )realloc(p->a, newcapacity*sizeof(SLDataType));
        if (tmp == NULL)
        {
            printf("relloc fail\n");
            exit(-1);
        }
        p->capacity = newcapacity;
        p->a = tmp;
    }    
}

//顺序表的尾插
void SeqListPushBack(SL* p, SLDataType x)
{
    SeqListCheckCapacity(p);//插入时先判断容量够不够再进行插入操作
    p->a[p->size] = x;
    p->size++;
}

//顺序表的打印
void SeqListPrint(SL* p)
{
    for(int i = 0;i < p->size;i++)
    {
        printf("%d \n", p->a[i]);
    }
}

//销毁顺序表
void SeqListDestory(SL* p)
{
    free(p->a);
    p->capacity = p->size = 0;
}

//顺序表尾删数据
void SeqListPopBack(SL* p)
{
    /* if(p->size > 0)
    {
        p->size--;
    } */
    assert(p->size > 0);//判断size的值是否大于零，防止size小于0，出现错误
    p->size--;
}

//顺序表头插数据
void SeqListPushFront(SL* p, SLDataType x)
{
    SeqListCheckCapacity(p);//插入时先判断容量够不够再进行插入操作
    //挪动数据
    int end = p->size - 1;
    while (end >= 0)
    {
        p->a[end+1] = p->a[end];
        --end;
    }
    p->a[0] = x;
    p->size++;
}

//头删数据表中的数据
void SeqListPopFront(SL* p)
{
    assert(p->size > 0);//判断size的值是否大于零，防止size小于0，出现错误
    //挪动数据
    int begin = 1;
    while (begin <= p->size-1)
    {
        p->a[begin - 1] = p->a[begin];
        ++begin;
    }
    p->size--;
}

//查找某一元素，找到了则返回x位置的下标
int SeqListFind(SL* p, SLDataType x)
{
    int i = 0;
    for(i;i <= p->size-1;i++)
    {
        if(p->a[i] == x)
        {
            return(i);
        }
    }
}

//在指定pos下标位置插入数据
void SeqListInsert(SL* p, int pos, SLDataType x)
{
    SeqListCheckCapacity(p);//插入时先判断容量够不够再进行插入操作
    int end = p->size;
    for(int i = 0;i < p->size-pos;i++)
    {
        p->a[end] = p->a[end-1];
        --end;
    }
    p->a[pos] = x;
}

//在指定pos下标位置删除数据
void SeqListErase(SL* p, int pos)
{

>>>>>>> 51b3f90d4cf16019ba266f4926c2a1924c9e0729
}