#include<stdio.h>
#define p 10
int max(int array[],int n) {
	int max = array[0];
	for (int i = 1; i < n; i++)
	{
		if (array[i] > max)
			max = array[i];
	}
	return max;
}
int min(int array[], int n) {
	int min = array[0];
	for (int i = 1; i < n; i++)
	{
		if (array[i] < min)
			min = array[i];
	}
	return min;
}
double ave(int array[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += array[i];
	}
	double avg = (double)sum / n;
	return avg;
}
int judge(int array[], int n ,int show) {
	for (int i = 0; i < n; i++)
	{
		if (array[i] == show)
		{
			return 1;
			break;
		}
	}
	return 0;
}
int main() {
	//5
	int num[p];
	for (int i = 0; i < p; i++)
	{
		printf("請輸入第%d個整數", i + 1);
		scanf_s("%d", &num[i]);
	}
	printf("最大值%d\n", max(num, p));
	printf("最小值%d\n", min(num, p));
	printf("平均值%.2lf\n", ave(num, p));
	//6
	int score[p];
	int pass = 0,fail = 0,show = 0;
	for (int i = 0; i < p; i++)
	{
		printf("請輸入第%d位同學的成績", i + 1);
		scanf_s("%d", &score[i]);
		if (score[i] >= 60){
			pass++;
		}
		else {
			fail++;
		}
	}
	printf("請輸入要搜尋的成績\n");
	scanf_s("%d", &show);
	printf("最高分%d\n", max(score, p));
	printf("最低分%d\n", min(score, p));
	printf("平均值%.2lf\n", ave(score, p));
	printf("及格人數%d\n", pass);
	printf("不及格人數%d\n", fail);
	if (judge(score, p ,show) == 1)
	{
		printf("%d分有出現", show);
	}
	else
	{
		printf("%d分沒有出現", show);
	}
	return 0;
}