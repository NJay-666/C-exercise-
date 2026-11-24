#include <stdio.h>
void sort_array(int[][3], int, int,int);
int main() {
	int data[10][3] = {
	{46,67,67},
	{47,22,66},
	{48,8,57},
	{49,14,87},
	{50,69,96},
	{51,100,100},
	{52,0,0},
	{53,94,87},
	{54,44,44},
	{55,12,34},
	};
	int col = -1;
	int flag = -1;
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
		if (flag != 0 && flag != 1 )
		{
			printf("請輸入符合條件的數字\n");
		}
	} while (flag != 0 && flag != 1 );
	printf("\n原始成績:\n");
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%4d", data[i][j]);
		}
		printf("\n");
	}
	sort_array(data, 10, flag,col);
	printf("\n排序後成績:\n");
	for (int i = 0; i < 10; ++i) {
		for (int j = 0; j < 3; j++)
		{
			printf("%4d", data[i][j]);
		}
		printf("\n");
	}
}
void sort_array(int data[][3], int n, int flag,int col) {
	if (flag == 1) { 
		for (int pass = 1; pass < n; ++pass) {
			for (int i = 0; i < n - 1; ++i) { 
				if (data[i][col] > data[i + 1][col]) {
					for (int j = 0; j < 3; j++) { 
						int hold = data[i][j];
						data[i][j] = data[i + 1][j];
						data[i + 1][j] = hold;
					}
				}
			}
		}
	}
	else { 
		for (int pass = 1; pass < n; ++pass) {
			for (int i = 0; i < n - 1; ++i) {
				if (data[i][col] < data[i + 1][col]) {
					for (int j = 0; j < 3; j++) { 
						int hold = data[i][j];
						data[i][j] = data[i + 1][j];
						data[i + 1][j] = hold;
					}
				}
			}
		}
	}
}