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
void DestoryList(SL* p)
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

//顺序表的打印
void DispList(SL* p)
{
    for(int i = 0;i < p->size;i++)
    {
        printf("%d ", p->a[i]);
    }
}

//顺序表的尾插
void SeqListPushBack(SL* p, ElemType x)
{
    SeqListCheckCapacity(p);//插入时先判断容量够不够再进行插入操作
    p->a[p->size] = x;
    p->size++;
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

//在指定下标位置插入数据
void ListInsert(SL* p, int pos, ElemType x)
{
    SeqListCheckCapacity(p);//插入时先判断容量够不够再进行插入操作
    int end = p->size;
    for(int i = 0;i < p->size-pos;i++)
    {
        p->a[end] = p->a[end-1];
        --end;
    }
    p->a[pos - 1] = x;
    p->size++;
}

//在指定下标位置删除数据，用e返回其值
void ListDelete(SL* p, int a, ElemType* x)
{
    *x = p->a[a-1];
    int begin = a;
    for(int i = 0;i <= p->size;i++)
    {
        p->a[begin-1] = p->a[begin];
        ++begin;
    }
    p->size--;
}

//逆置顺序表中的元素
void ReverseList(SL* p)
{
    int begin = 0;
    int end = p->size - 1;
    while(begin < end)
    {
        ElemType temp = p->a[begin];
        p->a[begin] = p->a[end];
        p->a[end] = temp;
        ++begin;
        --end;
    }
}

//删除顺序表中从第i个开始的k个元素
void DeleteElem(SL* p, int j, int k)
{
    for(int i = 0;i < k;i++)
    {
        for(int begin = j;begin <= p->size - 1;begin++)
        {
            p->a[begin-1] = p->a[begin];
        }
        p->size--;
    }
}