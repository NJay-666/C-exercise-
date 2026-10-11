#include<stdio.h>
int isPrime(int n) {
	int factor = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0) {
			factor++;
		}
	}
	if (factor == 2) {
		return 1;
	}
	else
	{
		return 0;
	}
}
int main() {
	//3
	int snum[10];
	int search = 0;
	int time = 0;
	int fshow = -1;
	for (int i = 0; i < 10; i++)
	{
		printf("請輸入第%d個整數:", i + 1);
		scanf_s("%d", &snum[i]);
	}
	printf("請輸入要搜尋的整數:\n");
	scanf_s("%d", &search);
	for (int i = 0; i < 10; i++)
	{
		if (snum[i] == search) {
			if (fshow == -1)
			{
				fshow = i + 1;
			}
			time++;
		}
	}
	if (time == 0)
	{
		printf("沒有找到%d\n", search);
	}
	else
	{
		printf("%d總共出現%d次\n", search, time);
		printf("第一次出現在第%d個位置\n", fshow);
	}
	//4
	int n;
	printf("請輸入一個正整數:");
	scanf_s("%d", &n);
	if (isPrime(n) == 1) {
		printf("是質數\n");
	}
	else
	{
		printf("不是質數\n");
	}
}