#include <stdio.h>
#define SIZE 10
void sort(int[], int, int);
int main()
{
    int a[SIZE];
    int flag = 0;
    printf("請輸入10個數字(空格隔開)");
    for (int i = 0; i < SIZE; ++i) {
        scanf_s("%d", &a[i]);
    }
    printf("\n請輸入排序方法:(大到小排列:0,小到大排列:1)\n");
    scanf_s("%d", &flag);
    puts("Data items in original order");
    for (int i = 0; i < SIZE; ++i) {
        printf("%4d", a[i]);
    }
    puts("\nData items in ascending order");
    sort(a, SIZE, flag);
    for (int i = 0; i < SIZE; ++i) {
        printf("%4d", a[i]);
    }
}
void sort(int arr[], int n, int flag) {
    if (flag == 1)
    {
        for (int pass = 1; pass < n; ++pass) {

            for (int i = 0; i < n - 1; ++i) {

                if (arr[i] > arr[i + 1]) {
                    int hold = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = hold;
                }
            }
        }
    }
    else
    {
        for (int pass = 1; pass < n; ++pass) {

            for (int i = 0; i < n - 1; ++i) {

                if (arr[i] < arr[i + 1]) {
                    int hold = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = hold;
                }
            }
        }
    }
}