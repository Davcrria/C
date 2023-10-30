#include <stdio.h>

void insertIntoSortedList(int arr[], int n, int x) 
{
    int i = 0;
    while (i < n && arr[i] < x) 
    {
        i++;
    }
    // 将元素插入到合适位置
    int j = n;
    while (j > i) 
    {
        arr[j] = arr[j-1];  // 向后移动元素
        j--;
    }
    arr[i] = x;  // 插入元素
}

int main() 
{
    int arr[] = {1, 3, 5, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 4;

    printf("原数组：");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }

    insertIntoSortedList(arr, n, x);
    n++;

    printf("\n插入 %d 后的数组：", x);
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
}