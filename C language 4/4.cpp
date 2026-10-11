#include<stdio.h>
#define pn 8
int main()
{
	//1
	int score[pn];
	int sum = 0, pass = 0;
	double avg = 0;
	for (int i = 0; i < pn; i++)
	{
		printf("請輸入第%d位同學的成績", i + 1);
		scanf_s("%d", &score[i]);
		sum += score[i];
		if (score[i] >= 60)
		{
			pass++;
		}
	}
	for (int i = 1; i < pn - 1; i++)
	{
		for (int j = 1; j < pn - i; j++)
		{
			if (score[j - 1] < score[j])
			{
				int temp = score[j];
				score[j] = score[j - 1];
				score[j - 1] = temp;
			}
		}
	}
	avg = (double)sum / pn;
	printf("最高分為:%d\n", score[0]);
	printf("最低分為:%d\n", score[pn - 1]);
	printf("平均分為:%.2f\n", avg);
	printf("及格人數為:%d\n", pass);
	//2
	int num[10];
	int po = 0, ne = 0, ze = 0;
	for (int i = 0; i < 10; i++) {
		printf("請輸入第%d個數字:", i + 1);
		scanf_s("%d", &num[i]);
		if (num[i] > 0) {
			po++;
		}
		else if (num[i] < 0) {
			ne++;
		}
		else {
			ze++;
		}
	}
	printf("正數有:%d個\n", po);
	printf("負數有:%d個\n", ne);
	printf("0有:%d個\n", ze);
	return 0;
}
