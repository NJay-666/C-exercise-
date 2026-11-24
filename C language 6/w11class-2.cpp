#include <stdio.h>
int linear_search(int[][3], int, int);
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
	int sn = 0;
	printf("請輸入要搜尋的學號");
	scanf_s("%d", &sn);
	printf("原始成績:\n");
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%4d", data[i][j]);
		}
		printf("\n");
	}
	if (linear_search(data, 10, sn) == -1)
	{
		printf("找不到該學號");
	}
	else
	{
		printf("學號:%d 數學:%d分 英文:%d分", data[linear_search(data, 10, sn)][0], data[linear_search(data, 10, sn)][1], data[linear_search(data, 10, sn)][2]);
	}
}
int linear_search(int data[][3], int n, int sn) {
	for (int i = 0; i < n; i++)
	{
		if (data[i][0] == sn)
		{
			return i;
		}
	}
	return 0;
}