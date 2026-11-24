#include<stdio.h>
void findMax(int* p, int n, int* result);
int countVowels(char* p);
int main() {
	//1耞案计㎝羆㎝
	int arr[6] = { 901,700,35,21,58,900 };
	int* p; 
	int i, even = 0, sum = 0;
	p = arr;
	printf("皚じ:");
	for (i = 0; i < 6; i++)
	{
		printf("%d ", *(p+i));
		if (*(p + i) % 2 == 0)
		{
			even++;
		}
		sum = sum + *(p + i);
	}
	printf("\n案计计:%d\n皚羆㎝:%d\n", even, sum);
	//2ノ夹т程
	int array[5] = { 900,700,21,58,901 };
	int max = 0;
	findMax(array, 5, &max);
	printf("程:%d", max);
	//3璸衡﹃いダ计秖
	char str[] = "Hello World";
	printf("ダΤ:%d", countVowels(str));
}
void findMax(int* p, int n, int* result) 
{
	*result = *p;// *p = array[0]
	for (int i = 1; i < n; i++)
	{
		if (*(p+i) > *result)
		{
			*result = *(p + i);
		}
	}
}
int countVowels(char* p)
{
	int vowel = 0;
	while (*p != '\0') {
		if (*p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u')
		{
			vowel++;
		}
		p++;
	}
	return vowel;
}