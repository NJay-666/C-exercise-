#include<stdio.h>
//指標練習
void b(int* p) {
	*p = 20;
}
int main() {
	int a = 10;
	//指標基礎
	int* p = &a;
	printf("變數a值%d\n", a);
	printf("變數a位址%p\n", &a);
	printf("指標p儲存的位址%p\n", p);
	printf("指標p參考取的值%d\n", *p);
	printf("指標p位址%p\n\n", &p);
	//結合陣列
	int sum = 0;
	int arr[5] = { 10,20,30,40,50 };
	for (int i = 0; i < 5; i++)
	{
		sum += *(arr+i);
	}
	printf("總和%d\n\n", sum);
	//結合函式
	b(&a);
	printf("a變為%d\n\n", a);
	//結合字串
	char str[6] = "world";
	char* p2 = str;
	for (int i = 0; i < 6; i++)
	{
		printf("%c\n", *(p2 + i));
	}
}
