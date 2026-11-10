#include<stdio.h>
#include<iostream>
using namespace std;
//觀念釐清
//函式核心:封裝一段重複執行的動作，不僅僅是做數學運算

//無回傳也無參數傳入
void menu(void) {
	cout << "--------歡迎來到遊戲系統--------";
	cout << "1. 開始遊戲";
	cout << "2. 讀取存檔";
	cout << "3. 離開遊戲";
}
//數學運算函式
int joddsum(int n) {
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		if ((i % 2) == 0)
			continue;
		sum += i;
	}
	return sum;
}
//字串
int length(char str[]) {
	int i = 0;
	/*for (i = 0; str[i] != '\0'; i++)
	{
		
	}*/
	while (str[i] != '\0') {
		i++;
	}
	return i;
}
int main() {
	char str[15] = "hello! world\n";//str[14]是剛好，寫成str[15]比較保險，可預防不小心出錯
	printf("字串長度:%d\n",length(str));
	for (int i = 6; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d", 7-i);
		}
		printf("\n");
	}
}