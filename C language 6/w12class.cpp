#include <stdio.h>
void sort_array(int[][3], int, int, int);
int binary_search(int[][3], int, int, int, int, int);
int main() {
	int data[10][3] = {
	{46,67,67},
	{47,22,66},
	{48,8,57},
	{49,54,68},
	{50,69,96},
	{51,100,100},
	{52,0,0},
	{53,94,87},
	{54,44,44},
	{55,12,34},
	};
	int col = -1;//比較項目
	int flag = -1;//排序方法
	int key = 0;//搜尋變數
	do
	{
		printf("請輸入比較項目:(0:學號, 1:數學, 2:英文)");
		scanf_s("%d", &col);
		if (col != 0 && col != 1 && col != 2)
		{
			printf("請輸入符合條件的數字\n");
		}
	} while (col != 0 && col != 1 && col != 2);
	do
	{
		printf("請輸入排序方法:(大到小排列:0,小到大排列:1)");
		scanf_s("%d", &flag);
		if (flag != 0 && flag != 1)
		{
			printf("請輸入符合條件的數字\n");
		}
	} while (flag != 0 && flag != 1);
	printf("請輸入要搜尋的學號或成績");
	scanf_s("%d", &key);
	printf("\n原始成績:\n");
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%4d", data[i][j]);
		}
		printf("\n");
	}
	sort_array(data, 10, flag, col);//排序
	printf("\n排序後成績:\n");
	for (int i = 0; i < 10; ++i) {
		for (int j = 0; j < 3; j++)
		{
			printf("%4d", data[i][j]);
		}
		printf("\n");
	}
	int index = binary_search(data, key, 0, 9, col, flag);//搜尋
	if (index == -1)
	{
		printf("沒找到\n");
	}
	else
	{
		printf("該學生為:");
		for (int j = 0; j < 3; j++)
		{
			printf("%4d", data[index][j]);
		}
	}
}
void sort_array(int data[][3], int n, int flag, int col) {
	for (int pass = 1; pass < n; ++pass) {
		for (int i = 0; i < n - pass; ++i) {
			int need_swap = (flag == 1) ? (data[i][col] > data[i + 1][col]) : (data[i][col] < data[i + 1][col]);
			if (need_swap) {
				for (int j = 0; j < 3; j++) {
					int hold = data[i][j];
					data[i][j] = data[i + 1][j];
					data[i + 1][j] = hold;
				}
			}
		}
	}
}
int binary_search(int a[][3], int key, int low, int high, int col,int flag) {
	int l = low, h = high;
	while (l <= h) {
		int mid = (h + l) / 2;
		if (flag == 1)
		{
			if (a[mid][col] > key)
			{
				h = mid - 1;
			}
			else if (a[mid][col] < key)
			{
				l = mid + 1;
			}
			else
			{
				return mid;
			}
		}
		else
		{
			if (a[mid][col] > key)
			{
				l = mid + 1;
			}
			else if (a[mid][col] < key)
			{
				h = mid - 1;
			}
			else
			{
				return mid;
			}
		}
	}
	return -1;
}
//遞迴寫法
int binary_search(int a[][3], int key, int low, int high, int col, int flag) {//col 比較項目,flag 排序方法,key 尋找目標
	if (low > high) 
		return -1;
	int mid = (low + high) / 2;
	if (a[mid][col] == key) 
		return mid;
	if (flag == 1) { // 小到大
		if (a[mid][col] > key) {
			return binary_search(a, key, low, mid - 1, col, flag);
		}
		else {
			return binary_search(a, key, mid + 1, high, col, flag);
		}
	}
	else { // 大到小
		if (a[mid][col] > key) {
			return binary_search(a, key, mid + 1, high, col, flag);
		}
		else {
			return binary_search(a, key, low, mid - 1, col, flag);
		}
	}
}
