
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
	double h ;
	double w ;
	double bmi;
	bool done = false;
	while(done == false){
		int cho = -1;
		puts("----------Menu----------");
		puts("0:離開系統");
		puts("1:計算BMI");
		printf("請輸入數字進行工作選項");
		scanf("%d",&cho);
		switch (cho){
			case 0: 
				done = true;
				break;
			case 1: 
				printf("請輸入身高");
				scanf("%lf",&h);
				printf("請輸入體重");
				scanf("%lf",&w);
				bmi = w / ((h/100)*(h/100));
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
				break;
			default:
				printf("請輸入0或1\n");
				continue;
		}
	}
	system("pause");
	return 0;
}
