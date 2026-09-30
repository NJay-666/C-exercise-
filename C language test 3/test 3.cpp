#include<stdio.h>
#include <time.h>
#include <stdlib.h>
int square(int x) {
	return x * x;
}
int isEven(int x) {
	if (x % 2 == 0) {
		return 1;//案计
	}
	else
	{
		return 0;//计
	}
}
int add(int x, int y) {
	return x + y;
}
int maxnumber(int x, int y) {
	if (x > y)
	{
		return x;
	}
	if (y > x)
	{
		return y;
	}
	if (x == y)
	{
		return x;
	}
}
int findmax(int z[], int n) {
	int max = z[0] ;
	for (int i = 1; i < n; i++)
	{
		if (z[i] > max) {
			max = z[i];
		}
	}
	return max;
}
int findmin(int z[], int n) {
	int min = z[0];
	for (int i = 1; i < n; i++)
	{
		if (z[i] < min) {
			min = z[i];
		}
	}
	return min;
}
int main() {
	//13
	int num;
	printf("叫块俱计");
	scanf_s("%d", &num);
	printf("%d\n", square(num));
	//14
	int Num;
	printf("叫块俱计");
	scanf_s("%d", &Num);
	printf("%d\n", isEven(Num));
	if (isEven(Num) == 1) {
		printf("%d 琌案计\n", Num);
	}
	else {
		printf("%d 琌计\n", Num);
	}
	//15
	int num1, num2;
	printf("叫块计1:");
	scanf_s("%d", &num1);
	printf("叫块计2:");
	scanf_s("%d", &num2);
	printf("ㄢ计:%d\n", add(num1, num2));
	//16
	int n1, n2;
	printf("叫块计1:");
	scanf_s("%d", &n1);
	printf("叫块计2:");
	scanf_s("%d", &n2);
	printf("ㄢ计耕:%d\n", maxnumber(n1, n2));
	//17
	srand(time(NULL));
	int truenum = rand() % 100 + 1;//1~100
	int time = 0;
	int guess;
	while (1) {
		printf("叫块俱计");
		scanf_s("%d", &guess);
		if (guess > truenum)
		{
			printf("瞦翴\n");
			time++;
		}
		else if (guess < truenum)
		{
			printf("瞦翴\n");
			time++;
		}
		else
		{
			printf("瞦い!!!\n");
			time++;
			break;
		}
	}
	printf("羆瞦%dΩ\n", time);
	//18
	int z[5];
	for (int i = 0; i < 5; i++)
	{
		printf("叫块计");
		scanf_s("%d", &z[i]);
	}
	printf("程:%d,程:%d", findmax(z, 5), findmin(z, 5));
	return 0;
}