# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# define SIZE 100000 // 定義常數 
int main(){
	printf("如要結束BMI測量，請在身高處輸入負數\n");
	double h ;
	double w ;
	double BMI[SIZE];
	int index = 0;
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
		
		BMI[index] = bmi;
		index++;
		
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
	for (int i = 0 ; i < index ; i++){
		printf("第%d筆資料=%.2f\n",i+1,BMI[i]);
	}
	system("pause");
	return 0;
}

