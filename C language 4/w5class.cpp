#include <stdio.h>
#include <math.h>  
int main()
{
    double principal,rate,amount = 0;
    int goal,year;
    printf("請輸入本金");
    scanf_s("%lf", &principal);
    printf("請輸入利率");
    scanf_s("%lf", &rate);
    printf("請輸入存款目標");
    scanf_s("%d", &goal);
    //巢狀迴圈1
    for (year = 1; amount <= goal; ++year) {
        amount = principal;
        for (int i = 1; i <= year; i++){
            amount *= (1 + rate);
        }
        printf("%d\t%.2lf\n", year, amount);
    }
    printf("第%d年可達成目標\n", year - 1);
    //巢狀迴圈2
    amount = principal;
    for (year = 1; amount <= goal; ++year) {
        //for (int i = 1; i <= 1; i++) {
            amount *= (1 + rate);
        //}
        printf("%d\t%.2lf\n", year, amount);
    }
    printf("第%d年可達成目標\n", year - 1);
    //數學函數
    for (year = 1; amount <= goal; ++year) {
        amount = principal * pow(1.0 + rate, year);
        printf("%d\t%.2lf\n", year, amount);
    }
    printf("第%d年可達成目標\n", year-1);
	//印星星
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i == j) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("    ");
		for (int j = 0; j < 5; j++) {
			if (i == j) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i + j == 4)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("    ");
		for (int j = 0; j < 5; j++)
		{
			if (i + j == 4)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
