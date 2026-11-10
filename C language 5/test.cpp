#include<stdio.h>
int main() {
	for (int i = 2; i < 2000; i+=i)
	{
		printf("%d\n", i);
	}
}