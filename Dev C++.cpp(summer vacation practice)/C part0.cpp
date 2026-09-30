/* First progrem in C
// = '=註解 
\n = vbcrlf = 換行 
每一行程式後面要記得加分號 
main()只能有一個
C變數會區分大小寫，宣告時直接型別+名稱(不用Dim) ex: int integer = 666 = dim integer as integer = 666
%d = 整數輸出 , %lf = 浮點數輸出(Double) , %s = 字串輸出 
vb Mod = C % ,vb and = C && , vb or = C ||
vb exit = C break 
break,continue差別:前者終止整個,後者只終止條件成立的下方敘述式，並繼續執行
"="是指將右方的值賦予左方,"=="是判斷兩邊的值是否相等 
vb select case-case else = C switch case-default
*/ 
 # include <stdio.h>
 # include <stdlib.h>
int main() {
	
	printf("Hello World\n");
	printf("如要結束BMI測量，請在身高處輸入負數\n");
	
	double h ;
	double w ;
	while (true){
	
		printf("請輸入身高");
		scanf("%lf",&h);
		
		if (h<0){
			break;
		}else if (h==0){
			printf("身高不可為0\n");
			continue;
		}
		
		printf("請輸入體重");
		scanf("%lf",&w);
		
		double bmi = w / ((h/100)*(h/100));
		
		printf("BMI = %.2f\n",bmi);
		
		if (bmi<18.5){
			printf("體重過輕\n");
		} else if(bmi<24){
			printf("健康體重\n");
		} else if(bmi<27){
			printf("體重過重\n");
		}else{
			printf("肥胖\n");
		}
}
	system("pause");
	
	return 0;
}
