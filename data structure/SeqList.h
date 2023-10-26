#include<stdio.h>
#include<stdlib.h>

typedef int ElemType;//方便修改类型


//动态顺序表
typedef struct SeqList//简写SeqList
{
    ElemType* a;
    int size;       //表示数组中储存了多少数据
    int capacity;   //表示数组实际能储存的空间有多大
}SL;

//顺序表的初始化，构造一个新的顺序表
void InitList(SL* p)
{
    p->a = NULL;
    p->capacity = p->size = 0;
}

//销毁顺序表
void Destory(SL* p)
{
    free(p->a);
    p->capacity = p->size = 0;
}

//判断线性表是否为空表
void ListEmpty(SL* p)
{
    if(p->size == 0)
    {
        printf("线性表为空表\n");
    }
    else
    {
        printf("线性表不为空表\n");
    }
}

//返回线性表的长度
void ListLength(SL* p)
{
    printf("线性表的长度为：%d\n", p->size);
}

//检查顺序表空间（capacity）容量，判断是否需要扩容
void SeqListCheckCapacity(SL* p)
{
    if(p->size == p->capacity)
    {
        //空间不足则扩容
        int newcapacity = p->capacity == 0 ? 4 : p->capacity*2;
        ElemType* tmp = (ElemType* )realloc(p->a, newcapacity*sizeof(ElemType));
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
void SeqListPushBack(SL* p, ElemType x)
{
    SeqListCheckCapacity(p);//插入时先判断容量够不够再进行插入操作
    p->a[p->size] = x;
    p->size++;
}

//顺序表的打印
void DispList(SL* p)
{
    for(int i = 0;i < p->size;i++)
    {
        printf("%d ", p->a[i]);
    }
}

//求线性表指定位置的某个数据元素，用e返回其值
void GetElem(SL* p, int i, ElemType* x)
{
    if(i < 0 || i > p->size)
    {
        printf("error\n");
    }
    else
    {
        *x = p->a[i-1];
    }
}

//查找某一元素，找到了则返回x位置的下标
int LocateElem(SL* p, ElemType x)
{
    int i = 0;
    while(i < p->size && p->a[i] != x)
    {
        i++;
    }
    if(i >= p->size)
    {
        return 0;
    }
    else
    {
        return i+1;
    }
}

//在指定pos下标位置插入数据
void ListInsert(SL* p, int pos, ElemType x)
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

//顺序表头插数据
void SeqListPushFront(SL* p, ElemType x)
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
/* void SeqListPopFront(SL* p)
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
} */





//在指定pos下标位置删除数据
void ListDelete(SL* p, int pos)
{
    int begin = pos + 1;
    for(int i = 0;i <= p->size;i++)
    {
        p->a[begin-1] = p->a[begin];
        ++begin;
    }
    p->size--;
}