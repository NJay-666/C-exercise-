#include<stdio.h>
int main() {
	//1
	int a;
	printf("請輸入一個數字");
	scanf_s("%d", &a);
	if (a % 2 == 0) {
		printf("%d是偶數", a);
	}
	else {
		printf("%d是奇數", a);
	}
	//2
	int score;
	printf("\n請輸入成績");
	scanf_s("%d", &score);
	if (score < 0 || score > 100) {
		printf("成績輸入錯誤");
	}
	else if (score < 60) {
		printf("F");
	}
	else if (score < 70) {
		printf("D");
	}
	else if (score < 80) {
		printf("C");
	}
	else if (score < 90) {
		printf("B");
	}
	else {
		printf("A");
	}
	//5
	int n;
	printf("\n請輸入一個數");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		printf("%d ", i);
	}
	//6
	int sum;
	int Sum = 0;
	int f = 1;
	printf("\n請輸入一個數");
	scanf_s("%d", &sum);
	while (f <= sum) {
		Sum = Sum + f;
		f++;
	}
	printf("%d\n", Sum);
	//9
	int num[5];
	for (int i = 0; i < 5; i++)
	{
		printf("請輸入一個整數\n");
		scanf_s("%d", &num[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", num[i]);
	}
	printf("\n");
	//10
	int Num[5];
	int total = 0;
	double avg = 0;
	for (int i = 0; i < 5; i++)
	{
		printf("請輸入一個整數\n");
		scanf_s("%d", &Num[i]);
		total = total + Num[i];
	}
	avg = total / 5.0;
	printf("總和為%d,平均為%.2f\n", total, avg);
	//3
	int x[3];
	for (int i = 0; i < 3; i++)
	{
		printf("請輸入一個整數\n");
		scanf_s("%d", &x[i]);
	}
	int big = x[0];
	if (x[1] > big) {
		big = x[1];
	}if (x[2] > big) {
		big = x[2];
	}
	printf("最大數字為%d", big);
	//7
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d x %d = %d\n", i + 1, j + 1, (i + 1) * (j + 1));
		}
	}
	//4
	double n1, n2;
	char sign;
	printf("請輸入第一個整數\n");
	scanf_s("%lf", &n1);
	printf("請輸入第二個整數\n");
	scanf_s("%lf", &n2);
	printf("請輸入運算符號\n");
	scanf_s(" %c", &sign);
	switch (sign)
	{
	case '+':
		printf("%.2f", n1 + n2);
		break;
	case '-':
		printf("%.2f", n1 - n2);
		break;
	case '*':
		printf("%.2f", n1 * n2);
		break;
	case '/':
		if (n2 == 0)
		{
			printf("除數不可為0");
			break;
		}
		else {
			printf("%.2f", n1 / n2);
			break;
		}
	default:
		printf("輸入錯誤");
		break;
	}
	//8
	int y;
	int time = 0;
	do
	{
		printf("請輸入一個整數：");
		scanf_s("%d", &y);
		if (y != 0)
		{
			time++;
		}
	} while (y != 0);
	printf("總共輸入了%d個非0數字\n", time);
	//11(第3題觀念，跳過)
	//12
	int arr[10];
	int even = 0;
	for (int i = 0; i < 10; i++)
	{
		printf("請輸入一個整數");
		scanf_s("%d", &arr[i]);
		if (arr[i] % 2 == 0)
		{
			even++;
		}
	}
	printf("偶數有%d個",even);
	return 0;

}