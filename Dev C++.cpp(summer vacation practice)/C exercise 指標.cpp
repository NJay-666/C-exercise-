
# include<stdio.h>
# include<stdlib.h>
int main(){
	int a = 10;
	printf("a = %d \n ", a);
	
	a = 20 ;
	printf("a = %d \n ", a);
	
	int *aPtr = &a;
	printf("*aPtr = %d \n", *aPtr);
	
	*aPtr = 200;
	printf("*aPtr = %d \n", *aPtr);
	printf("aPtr = %p \n", aPtr);
	
	system("pause");
	return 0;
}
