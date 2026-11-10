#include<stdio.h>
int fib(int n);//函數原型宣告
int main() {
	int nn;
	printf("請輸入第n項:");
	scanf_s("%d", &nn);//請使用者輸入並接收使用者輸入值
	for (int i = 0; i < nn; i++)
	{
		printf("%d,", fib(i));//輸出各項項數
	}
}
int fib(int n) {
	if (n == 0) {
		return 0;
	}
	if (n == 1) {
		return 1;
	}
	else {
		return fib(n - 1) + fib(n - 2);
	}
}
//int fib(int n) 
//{
//	if (n == 1 || n == 2) 
//	{
//		return n-1;
//	}
//	else 
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}