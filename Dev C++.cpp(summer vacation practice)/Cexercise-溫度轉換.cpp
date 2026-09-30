
#include <stdio.h>
#include <stdlib.h> 
//攝氏華氏溫度轉換 
// system("pause") : 讓程式碼跑完後不會馬上跳離視窗(開頭要記得加上 #include <stdlib.h> ) 
int main(){
	double C ;
	double F ;
	
	//攝氏轉華氏 
	printf("請輸入攝氏溫度");
	scanf("%lf",&C);
	F = 9.0/5*C+32;
	printf("華氏溫度為%.2lf\n",F);
	//華氏轉攝氏 
	printf("請輸入華氏溫度");
	scanf("%lf",&F);
	C = (F-32)*5/9;
	printf("攝氏溫度為%.2lf\n",C);
	
	system("pause");
	
	return 0;
}

