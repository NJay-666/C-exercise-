
# include <stdio.h>
# include <stdlib.h>
// ex. n=n+1 可縮寫成 n++ 
// vb for i as integer = 1 to 10 step 1 = C for(int i = 1 ; i <= 10 ; i++) 
int main(){
	int grade;
	int counter=0;
	int sum=0;
	double average;
	int pass=0;
	int fail=0;
	while(counter < 10){
		printf("請輸入成績: ");
		scanf("%d",&grade);
		sum = sum + grade;
		counter ++;
		if (grade >= 60){
			pass++;
		}else{
			fail++;
		}
	}
	average = sum / 10.0;
	printf("班級總成績為%d,平均為%.2lf\n及格的有%d人,不及格的有%d人\n",sum,average,pass,fail);
	if(pass>=8){
		printf("Bonus\n");
	}
	system("pause");
	return 0 ;
}
 
