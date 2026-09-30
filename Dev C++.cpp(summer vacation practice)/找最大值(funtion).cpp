
# include <stdio.h>
# include <stdlib.h>
int max(int x , int y ,int z){
	int m = x;
	if (y>m){
		m = y;
	}if (z>m){
		m = z;
	}
	return m;
}
int main(){
	int n1;
	int n2;
	int n3;
	printf("請輸入三個數字\n");
	scanf("%d%d%d",&n1,&n2,&n3);
	printf("最大值是%d\n",max(n1,n2,n3)); 
	system("pause");
	return 0;
}

