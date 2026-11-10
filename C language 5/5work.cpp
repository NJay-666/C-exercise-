#include<stdio.h>
int main() {
	//判斷正負或0，並算出總合
	int pos = 0, neg = 0,zero=0,num,sum=0;
	for (int i = 0; i < 10; i++)
	{
		printf("請輸入第%d個整數", i + 1);
		scanf_s("%d", &num);
		if (num > 0){
			pos++;
			sum += num;
		}
		else if (num < 0) {
			neg++;
		}
		else
		{
			zero++;
		}
	}
	printf("正數有%d個\n負數有%d個\n0有%d個\n正數總和為%d\n", pos, neg, zero, sum);
	//成績統計與排序
	#define p 5
	int score[p];
	int pass = 0;
	double sumave = 0;
	for (int i = 0; i < p; i++)
	{
		printf("請輸入第%d位同學成績", i + 1);
		scanf_s("%d", &score[i]);
		sumave += score[i];
		if (score[i] >= 60)
		{
			pass++;
		}
	}
	for (int i = 0; i < p-1; i++)
	{
		for (int j = 0; j < p-1-i; j++)
		{
			if (score[j] < score[j + 1])
			{
				int tem = score[j];
				score[j] = score[j + 1];
				score[j + 1] = tem;
			}
		}
	}
	printf("成績由高到低排序為:");
	for (int i = 0; i < p; i++)
	{
		printf("%d\t", score[i]);
	}
	printf("\n最高分:%d\n最低分:%d\n平均分:%.2lf\n及格人數%d\n",score[0], score[4], sumave/5.0,pass);
}