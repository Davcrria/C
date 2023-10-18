<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#define N 50


/* void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
} */

typedef int SLDataType;

typedef struct 
{
    SLDataType* ps;
    int length;
}SL;



/*void InitList(SL * & L);

void DestroyList(SL * & L);

bool ListEmpty(SL * L);

int ListLength(SL * L);

void DispList(SL * L);

bool GetElem(SL * L, int i, SLDataType &e);

int LocateElem(SL * L, SLDataType e);

bool ListInsert(SL * & L, int i, SLDataType e);*/


/*void CreatList(SL *&L, SLDataType a[], int n)
{
    int i=0,k=0;
    L=(SL *)malloc(sizeof(SL));
    while (i<n)
    {
        L->data[k]=a[i];
        k++;
        i++;
    }
    L->length=k;
}*/

/*void InitList(SL * & L)
{
    L=(SL *)malloc(sizeof(SL));
    L->length=0;
}

void DestroyList(SL *&L)
{
    free(L);
}*/

/* bool ListEmpty(SL *L)
{
    return(L->length==0);
} */

/*int ListLength(SL *L)
{
    return(L->length);
}

void DispList(SL *L)
{
    for(int i=0;i->length;i++)
    {
        printf("%d",L->data[i]);
    }
    printf("\n");
}

bool GetElem(SL *L, int i, SLDataType &e)
{
    if(i<1 || i>L->length)
    return false;
    e=L->data[i-1];
    return true;
}

int LocateElem(SL *L, SLDataType e)
{
    int i=0;
    while (i<L->length && L->data[i]!=e)
    {
        i++;
    }
    if(i>=L->length)
    {
        return 0;
    }
    else
    {
        return i+1;
    }
}

bool ListInsert(SL *&L, int i, SLDataType e)
{
    int j;
    return false;
}*/

=======
#include <stdio.h>
#include <stdlib.h>
#define N 50


/* void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
} */

typedef int SLDataType;

typedef struct 
{
    SLDataType* ps;
    int length;
}SL;



/*void InitList(SL * & L);

void DestroyList(SL * & L);

bool ListEmpty(SL * L);

int ListLength(SL * L);

void DispList(SL * L);

bool GetElem(SL * L, int i, SLDataType &e);

int LocateElem(SL * L, SLDataType e);

bool ListInsert(SL * & L, int i, SLDataType e);*/


/*void CreatList(SL *&L, SLDataType a[], int n)
{
    int i=0,k=0;
    L=(SL *)malloc(sizeof(SL));
    while (i<n)
    {
        L->data[k]=a[i];
        k++;
        i++;
    }
    L->length=k;
}*/

/*void InitList(SL * & L)
{
    L=(SL *)malloc(sizeof(SL));
    L->length=0;
}

void DestroyList(SL *&L)
{
    free(L);
}*/

/* bool ListEmpty(SL *L)
{
    return(L->length==0);
} */

/*int ListLength(SL *L)
{
    return(L->length);
}

void DispList(SL *L)
{
    for(int i=0;i->length;i++)
    {
        printf("%d",L->data[i]);
    }
    printf("\n");
}

bool GetElem(SL *L, int i, SLDataType &e)
{
    if(i<1 || i>L->length)
    return false;
    e=L->data[i-1];
    return true;
}

int LocateElem(SL *L, SLDataType e)
{
    int i=0;
    while (i<L->length && L->data[i]!=e)
    {
        i++;
    }
    if(i>=L->length)
    {
        return 0;
    }
    else
    {
        return i+1;
    }
}

bool ListInsert(SL *&L, int i, SLDataType e)
{
    int j;
    return false;
}*/

>>>>>>> 51b3f90d4cf16019ba266f4926c2a1924c9e0729
